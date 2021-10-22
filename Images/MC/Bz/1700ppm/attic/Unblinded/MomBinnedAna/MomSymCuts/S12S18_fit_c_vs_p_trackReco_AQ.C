void S12S18_fit_c_vs_p_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May 13 11:33:42 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-0.5000001,-0.5242282,8.5,-0.01774617);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1293[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t Graph0_fy1293[7] = {
   -0.4306672,
   -0.3003865,
   -0.2440479,
   -0.2115728,
   -0.1818723,
   -0.1599593,
   -0.1237584};
   Double_t Graph0_fex1293[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1293[7] = {
   0.00914739,
   0.009059884,
   0.00914064,
   0.009527177,
   0.01049211,
   0.01284274,
   0.02159851};
   TGraphErrors *gre = new TGraphErrors(7,Graph0_fx1293,Graph0_fy1293,Graph0_fex1293,Graph0_fey1293);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01293 = new TH1F("Graph_Graph01293","S12S18",100,0.4,7.6);
   Graph_Graph01293->SetMinimum(-0.47358);
   Graph_Graph01293->SetMaximum(-0.06839438);
   Graph_Graph01293->SetDirectory(0);
   Graph_Graph01293->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01293->SetLineColor(ci);
   Graph_Graph01293->GetXaxis()->SetTitle("Symmetric cut");
   Graph_Graph01293->GetXaxis()->CenterTitle(true);
   Graph_Graph01293->GetXaxis()->SetLabelFont(42);
   Graph_Graph01293->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01293->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01293->GetXaxis()->SetTitleFont(42);
   Graph_Graph01293->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01293->GetYaxis()->CenterTitle(true);
   Graph_Graph01293->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01293->GetYaxis()->SetLabelFont(42);
   Graph_Graph01293->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01293->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01293->GetYaxis()->SetTitleFont(42);
   Graph_Graph01293->GetZaxis()->SetLabelFont(42);
   Graph_Graph01293->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01293->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01293);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4253015,0.94,0.5746985,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
