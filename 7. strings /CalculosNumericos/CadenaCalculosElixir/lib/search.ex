defmodule Search do
  @moduledoc """
  Documentation for Search.
  """

  @doc """
    binary of  26 a la 3 * 100 groups of 3 letters
  """
  #import Math


  def hello do
    :world
  end

  def random_code() do
    charset = "ABCDEFGHIJKNLMOPQRSTUVWXYZ" |> String.split("", trim: true)

    Enum.reduce((0..2), [], fn (_i, acc) ->
      [Enum.random(charset) | acc]
    end) |> Enum.join("")
  end

  def create_large_string do
    for _n <- 1..1_757_60, do: random_code()
  end

  def find_ipns do
    Enum.find(create_large_string(), fn x -> x == "IPN" end)
  end

  def calcular do
    for n <- 1..10_000_000, do: calc(n)
  end

  def calc(n) do
    sin = Math.sin(n)
    cos = Math.cos(n)
    tan = Math.tan(n)
    log = Math.log(n)
    sqrt = Math.sqrt(n)
  end

end
