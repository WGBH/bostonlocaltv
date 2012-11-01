<%-   
  # pass in local :document with a SolrDocument                  
  doc_id = params[:id] + "." + params[:format]
  method = (item_in_folder?(document.id) ? "delete" : "put")
  label = (item_in_folder?(document.id) ? "Unselect" : "Select")
  cssClass = (item_in_folder?(document.id) ? "deleteFolder" : "addFolder")
  the_time = "the_time" + "_" + document.id
-%>
<%= form_for( setup_vote(@vote), :remote=> true, :html=>{:class=> "#{document.id} #{cssClass}", "data-doc-id" => document.id, :title=>h(document[document_show_link_field])}) do |f| %>
<%= f.hidden_field "item_id", :value => document.id %>
<%= f.hidden_field "user_id", :value => cookies[:"#{the_time}"] %>
<%= render :partial=> "votes", :locals => {:votes => @vote, :doc_id => document.id} %>
<% end %>
