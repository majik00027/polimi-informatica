# Elementi della teoria intuitiva degli insiemi

Def: *Insieme*, collezione, aggregato di oggetti di natura qualsiasi non strutturato.

∅ = Insieme vuoto

## Rappresentazione:

1. A, B, C, Maiuscole
2. Per tabulazione A := {1, 2, 4, 10}
3. Per caratteristica, si descrive l'insieme per una particolare caratteristica
A := {x|P(x)} 
ex: A := {x|x>3}
4. Grafica Oggetto == Punto

## Operazioni

### Ugualianza

A = B uguali se hanno gli stessi oggetti

#### Proprietà ugualianza
1. A = A riflessiva
2. A = B => B = A simmetrica
3. A = B e B = C => A = C transitiva

### Inclusione

A ⊆ B; A è contenuto in B

A può coincidere con B

x ∈ A => x ∈ B

#### Proprietà inclusione
1. A ⊆ A Riflessiva
2. A ⊆ B e B ⊆ A => A = B Antisimmetrica
3. A ⊆ B e B ⊆ C => A ⊆ C Transitiva

### Inclusione stretta

A ⊂ B

x ∈ A => x ∈ B e ⁆ b (b ∈ B e b ∉ A)

(A è strettamente inclusa in B, se esiste una x che appartiene ad A allora x appartiene anche a B ed esiste una b tale che appartiene a B ma non ad A)

#### Proprietà inclusione stretta
Permane solo la transitiva della inclusione normale

## Operazioni Binarie

### Unione: ⋃

⋃: (A,B) -> C := {x ∈ S | x ∈ A o x ∈ B}

#### Proprietà unione:
1. A ⋃ A = A idepotenza
2. A ⋃ B = B ⋃ A commutativa
3. (A ⋃ B) ⋃ C = A ⋃ (B ⋃ C) associativa
4. A,B ∈ A ⋃ B
5. A ⊂ B <=> B = A ⋃ B

### Intersezione: ⋂
⋂ : (A,B) -> C := {x ∈ S | x ∈ A e x ∈ B}

#### Proprietà intersezione:
1. A ⋂ A = A
2. A ⋂ B ⊆ A,B
3. A ⋂ B = ⋂ A
4. (A ⋂ B) ⋂ C =  A ⋂ (B ⋂ C) = A ⋂ B ⋂ C
5. A ⋂ B = A <=> B ⊆ A

Qui è stato introdotto l'insieme vuoto.

Nel caso in cui A non avesse elementi in comune con B senza ∅ l'operazione di interesezione non avrebbe senso.

∅ -> Sottoinsieme di ogni insieme

A ⋃ ∅ = A
A ⋂ ∅ = ∅

## Altre operazioni con insiemi

### Differenza
A ╲ B := {x ∈ S | x ∈ A e x ∉ B}

#### Proprietà differenza:
1. A ╲ A = ∅
2. A ╲ B ⊆ A

### Complementazione
Complemenatare di A ≡ A' ≡ A^c

A' := {x ∈ S | x ∉ A}

#### Proprietà del complementare
1. (A')' = A
2. S' = ∅
3. ∅' = S
4. A ╲ B = A ⋂ B'

## Proprietà che legano ⋃, ⋂ e complementare.
1. Proprietà distributiva:
+ (A ⋃ B) ⋂ C = (A ⋂ C) ⋃ (B ⋂ C) 
+ (A ⋂ B) ⋃ C = (A ⋃ C) ⋂ (B ⋃ C)
2. Legge di de Morgan
+ (A ⋃ B)' = A' ⋂ B'
+ (A ⋂ B)' = A' ⋃ B'

## Prodotto Cartesiano

A ⨯ B := {(a,b) | a ∈ A e b ∈ B}

A = {1, 2}

B = {3, 4}

A ⨯ B = {(1,3), (1,4), (2,3), (2,4)}