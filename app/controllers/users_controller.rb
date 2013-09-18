class UsersController < ApplicationController
  
  def cart
    @cart = ShoppingCart.user_open_cart(current_user).last
  end
  
  def orders
    @carts_open = ShoppingCart.has_items(current_user).open
    @carts_pending = ShoppingCart.has_items(current_user).pending
    @carts_closed = ShoppingCart.has_items(current_user).closed
  end
  
end