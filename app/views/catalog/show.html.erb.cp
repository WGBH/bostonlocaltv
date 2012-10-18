<% @page_title = "- #{application_name}" %>
<% extra_head_content << render_link_rel_alternates %>
<% sidebar_items << render_document_sidebar_partial %>

<div class="show">
  <%= render 'constraints', :localized_params=>session[:search] %>
</div>

<div class="pageEntriesInfo">
  <%= item_page_entry_info %>
  <%=link_to "start over", catalog_index_path, :id=>"startOverLink" %>
</div>

<%= render 'previous_next_doc' %>

<%# this should be in a partial -%>
<div id="document" class="<%= render_document_class %>">
   <%=debug (@document) %>
  <div id="doc_<%= @document.id.to_s.parameterize %>">

    <% # bookmark/folder functions -%>
    <%= render_show_doc_actions @document %>        

    <%= render_document_heading.html_safe %>
    <div class="tools"><%= render :partial => 'show_tools', :locals => {:document => @document} %></div>
    <div class="document">
      <%= render_document_partial @document, :show %>
    </div>
  </div>
</div>

  <% if @document.respond_to?(:export_as_openurl_ctx_kev) %>
    <!-- 
         // COinS, for Zotero among others. 
         // This document_partial_name(@document) business is not quite right,
         // but has been there for a while. 
    -->
    <span class="Z3988" title="<%= @document.export_as_openurl_ctx_kev(document_partial_name(@document)) %>"></span>
  <% end %>
