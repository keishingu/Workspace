class RemoveTextToTodos < ActiveRecord::Migration
  def up
    remove_column :todos, :text
  end

  def down
    add_column :todos, :text, :string
  end
end
