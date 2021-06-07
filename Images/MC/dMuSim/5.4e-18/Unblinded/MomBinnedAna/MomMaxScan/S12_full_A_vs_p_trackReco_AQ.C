void S12_full_A_vs_p_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri May 21 13:25:23 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(250,0.1223643,3550,0.4173262);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1222[12] = {
   3000,
   2800,
   2600,
   2400,
   2200,
   2000,
   1800,
   1600,
   1400,
   1200,
   1000,
   800};
   Double_t Graph0_fy1222[12] = {
   0.189222,
   0.1903633,
   0.1917596,
   0.1928251,
   0.196532,
   0.2008924,
   0.2054236,
   0.2110321,
   0.208839,
   0.2422862,
   0.3105926,
   0.3071903};
   Double_t Graph0_fex1222[12] = {
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
   Double_t Graph0_fey1222[12] = {
   0.01769741,
   0.01779058,
   0.01806384,
   0.01848354,
   0.01916549,
   0.02020592,
   0.02174128,
   0.02396394,
   0.02721375,
   0.03218328,
   0.04085469,
   0.06097562};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1222,Graph0_fy1222,Graph0_fex1222,Graph0_fey1222);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01222 = new TH1F("Graph_Graph01222","S12",100,580,3220);
   Graph_Graph01222->SetMinimum(0.1518605);
   Graph_Graph01222->SetMaximum(0.38783);
   Graph_Graph01222->SetDirectory(0);
   Graph_Graph01222->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01222->SetLineColor(ci);
   Graph_Graph01222->GetXaxis()->SetTitle("p_{max} [MeV]");
   Graph_Graph01222->GetXaxis()->SetRange(1,100);
   Graph_Graph01222->GetXaxis()->CenterTitle(true);
   Graph_Graph01222->GetXaxis()->SetLabelFont(42);
   Graph_Graph01222->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01222->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01222->GetXaxis()->SetTitleFont(42);
   Graph_Graph01222->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01222->GetYaxis()->CenterTitle(true);
   Graph_Graph01222->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01222->GetYaxis()->SetLabelFont(42);
   Graph_Graph01222->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01222->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01222->GetYaxis()->SetTitleFont(42);
   Graph_Graph01222->GetZaxis()->SetLabelFont(42);
   Graph_Graph01222->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01222->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01222);
   
   gre->Draw("ap");
   
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
