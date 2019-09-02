defmodule SearchTest do
  use ExUnit.Case
  doctest Search

  @tag timeout: :infinity
  test "calc" do
    ipns = Search.calcular
    assert true
  end

end
