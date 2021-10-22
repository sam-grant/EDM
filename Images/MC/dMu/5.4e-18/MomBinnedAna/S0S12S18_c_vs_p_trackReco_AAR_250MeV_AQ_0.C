void S0S12S18_c_vs_p_trackReco_AAR_250MeV_AQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct 21 14:36:22 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(500.0625,-2.924029,2744.438,0.8010823);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1055[12] = {
   125,
   375,
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625,
   2875};
   Double_t Graph0_fy1055[12] = {
   -0.2484802,
   -2.274382,
   -0.7453361,
   -0.3081135,
   -0.1880504,
   -0.1491886,
   -0.1308524,
   -0.1062419,
   -0.100934,
   -0.09130193,
   -0.05287202,
   -0.01267707};
   Double_t Graph0_fex1055[12] = {
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
   Double_t Graph0_fey1055[12] = {
   0.4287105,
   0.02879564,
   0.01436572,
   0.01177194,
   0.01061622,
   0.009786546,
   0.009275192,
   0.00914608,
   0.009397256,
   0.01016184,
   0.01085931,
   0.01398438};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1055,Graph0_fy1055,Graph0_fex1055,Graph0_fey1055);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01055 = new TH1F("Graph_Graph01055","S0S12S18_",100,0,3150);
   Graph_Graph01055->SetMinimum(-2.551518);
   Graph_Graph01055->SetMaximum(0.4285711);
   Graph_Graph01055->SetDirectory(0);
   Graph_Graph01055->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01055->SetLineColor(ci);
   Graph_Graph01055->GetXaxis()->SetTitle("p [MeV]: in range p #minus 125 < p < p #plus 125 MeV");
   Graph_Graph01055->GetXaxis()->SetRange(24,80);
   Graph_Graph01055->GetXaxis()->CenterTitle(true);
   Graph_Graph01055->GetXaxis()->SetLabelFont(42);
   Graph_Graph01055->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01055->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01055->GetXaxis()->SetTitleFont(42);
   Graph_Graph01055->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01055->GetYaxis()->CenterTitle(true);
   Graph_Graph01055->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01055->GetYaxis()->SetLabelFont(42);
   Graph_Graph01055->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01055->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01055->GetYaxis()->SetTitleFont(42);
   Graph_Graph01055->GetZaxis()->SetLabelFont(42);
   Graph_Graph01055->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01055->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01055);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.3920101,0.9362587,0.6079899,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
