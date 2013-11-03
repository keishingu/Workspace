class CreateTwitters < ActiveRecord::Migration
  def change
    create_table :twitters do |t|
      t.string :tweet

      t.timestamps
    end
  end
end
