void S0S12S18_full_A_vs_p_trackReco_equalStats_250e3_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May 19 01:13:31 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-535,-0.07629796,3335,0.3613194);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1274[15] = {
   0,
   200,
   400,
   600,
   800,
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2200,
   2400,
   2600,
   2800};
   Double_t Graph0_fy1274[15] = {
   0.2236155,
   0.2218076,
   0.2314195,
   0.1985242,
   0.1501403,
   0.1233662,
   0.08123009,
   0.1145307,
   0.08859104,
   0.1156207,
   0.1038184,
   0.08480069,
   0.09346036,
   0.06996007,
   0.0300586};
   Double_t Graph0_fex1274[15] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t Graph0_fey1274[15] = {
   0.0575993,
   0.05758444,
   0.05696361,
   0.05278469,
   0.04782117,
   0.04314427,
   0.03909741,
   0.03527975,
   0.0318389,
   0.02873544,
   0.02569582,
   0.02252521,
   0.01936251,
   0.02124101,
   0.03342033};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1274,Graph0_fy1274,Graph0_fex1274,Graph0_fey1274);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01274 = new TH1F("Graph_Graph01274","S0S12S18",100,-400,3200);
   Graph_Graph01274->SetMinimum(-0.03253622);
   Graph_Graph01274->SetMaximum(0.3175576);
   Graph_Graph01274->SetDirectory(0);
   Graph_Graph01274->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01274->SetLineColor(ci);
   Graph_Graph01274->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_Graph01274->GetXaxis()->SetRange(8,93);
   Graph_Graph01274->GetXaxis()->CenterTitle(true);
   Graph_Graph01274->GetXaxis()->SetLabelFont(42);
   Graph_Graph01274->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01274->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01274->GetXaxis()->SetTitleFont(42);
   Graph_Graph01274->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01274->GetYaxis()->CenterTitle(true);
   Graph_Graph01274->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01274->GetYaxis()->SetLabelFont(42);
   Graph_Graph01274->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01274->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01274->GetYaxis()->SetTitleFont(42);
   Graph_Graph01274->GetZaxis()->SetLabelFont(42);
   Graph_Graph01274->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01274->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01274);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4033166,0.94,0.5966834,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0S12S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
