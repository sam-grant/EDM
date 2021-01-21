void CaloMisalignment_4()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jan 19 03:29:49 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-3.156,-2.815777,28.404,2.189464);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1004[24] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9,
   10,
   11,
   12,
   13,
   14,
   15,
   16,
   17,
   18,
   19,
   20,
   21,
   22,
   23,
   24};
   Double_t Graph0_fy1004[24] = {
   -0.589498,
   -1.420598,
   1.201173,
   0.05249339,
   1.151155,
   1.092768,
   1.3218,
   -1.233187,
   -1.948077,
   -0.4147125,
   -0.2549526,
   -0.01125449,
   0.6566018,
   0.2574787,
   0.5213081,
   -0.3248575,
   0.7501823,
   0.8279308,
   -0.8737741,
   -0.04450153,
   -0.06603362,
   -0.4968162,
   -0.545517,
   0.4082436};
   Double_t Graph0_fex1004[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1004[24] = {
   0.03000487,
   0.03190531,
   0.03397258,
   0.0339174,
   0.03221173,
   0.03240799,
   0.03345652,
   0.03234269,
   0.03349269,
   0.03232917,
   0.03202328,
   0.02953827,
   0.02629211,
   0.03040165,
   0.02925919,
   0.03259314,
   0.03233834,
   0.02916653,
   0.0281354,
   0.0317217,
   0.03253015,
   0.03178197,
   0.03078477,
   0.02974569};
   TGraphErrors *gre = new TGraphErrors(24,Graph0_fx1004,Graph0_fy1004,Graph0_fex1004,Graph0_fey1004);
   gre->SetName("Graph0");
   gre->SetTitle("18 kV, N=4");
   gre->SetFillColor(1);
   gre->SetFillStyle(1000);
   
   TH1F *Graph_Graph01004 = new TH1F("Graph_Graph01004","18 kV, N=4",100,0,26.3);
   Graph_Graph01004->SetMinimum(-2.315253);
   Graph_Graph01004->SetMaximum(1.68894);
   Graph_Graph01004->SetDirectory(0);
   Graph_Graph01004->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01004->SetLineColor(ci);
   Graph_Graph01004->GetXaxis()->SetTitle("Calo number");
   Graph_Graph01004->GetXaxis()->SetRange(1,96);
   Graph_Graph01004->GetXaxis()->CenterTitle(true);
   Graph_Graph01004->GetXaxis()->SetLabelFont(42);
   Graph_Graph01004->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01004->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01004->GetXaxis()->SetTitleFont(42);
   Graph_Graph01004->GetYaxis()->SetTitle("y_{data} #minus y_{func} [mm]");
   Graph_Graph01004->GetYaxis()->CenterTitle(true);
   Graph_Graph01004->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01004->GetYaxis()->SetLabelFont(42);
   Graph_Graph01004->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01004->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01004->GetYaxis()->SetTitleFont(42);
   Graph_Graph01004->GetZaxis()->SetLabelFont(42);
   Graph_Graph01004->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01004->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01004);
   
   gre->Draw("ab");
   
   TPaveText *pt = new TPaveText(0.3989196,0.9362587,0.6010804,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("18 kV, N=4");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
