void S12_c_vs_p_Run-1c_250MeV_1000_2500_MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun May  8 18:10:05 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(785.0101,-0.002096384,2703.416,0.009993944);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1039[11] = {
   456.0861,
   655.6285,
   884.3505,
   1127.522,
   1373.594,
   1620.299,
   1867.139,
   2116.241,
   2359.688,
   2607.54,
   2781.094};
   Double_t Graph0_fy1039[11] = {
   -0.9365965,
   0.02309316,
   0.001874984,
   0.004380373,
   0.004158151,
   0.001640252,
   0.002915467,
   0.006490957,
   0.007332203,
   -0.001752047,
   -0.02956761};
   Double_t Graph0_fex1039[11] = {
   0.1116271,
   0.07807486,
   0.05127415,
   0.0465371,
   0.04560658,
   0.05024335,
   0.06051896,
   0.07584685,
   0.09852744,
   0.1381994,
   0.2207759};
   Double_t Graph0_fey1039[11] = {
   0.1120417,
   0.02822118,
   0.01418345,
   0.01074614,
   0.009308007,
   0.008917952,
   0.009086935,
   0.009666482,
   0.01076927,
   0.01291109,
   0.04829227};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1039,Graph0_fy1039,Graph0_fex1039,Graph0_fey1039);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01039 = new TH1F("Graph_Graph01039","S12",100,223.4404,3013.849);
   Graph_Graph01039->SetMinimum(-0.0008873509);
   Graph_Graph01039->SetMaximum(0.008784911);
   Graph_Graph01039->SetDirectory(0);
   Graph_Graph01039->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01039->SetLineColor(ci);
   Graph_Graph01039->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01039->GetXaxis()->SetRange(28,82);
   Graph_Graph01039->GetXaxis()->CenterTitle(true);
   Graph_Graph01039->GetXaxis()->SetLabelFont(42);
   Graph_Graph01039->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01039->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01039->GetXaxis()->SetTitleFont(42);
   Graph_Graph01039->GetYaxis()->SetTitle("c [mrad] / 250 MeV");
   Graph_Graph01039->GetYaxis()->CenterTitle(true);
   Graph_Graph01039->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01039->GetYaxis()->SetLabelFont(42);
   Graph_Graph01039->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01039->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01039->GetYaxis()->SetTitleFont(42);
   Graph_Graph01039->GetZaxis()->SetLabelFont(42);
   Graph_Graph01039->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01039->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01039);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
