void S18_full_c_vs_p_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May 13 14:54:18 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-420.75,-4.521121,3456.75,0.9693358);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1197[15] = {
   100,
   300,
   500,
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300,
   2500,
   2700,
   2900};
   Double_t Graph0_fy1197[15] = {
   -2.717524,
   -2.885568,
   -1.444939,
   -0.5204484,
   -0.3730839,
   -0.3005174,
   -0.2366966,
   -0.1861169,
   -0.09554347,
   -0.1470477,
   -0.1833412,
   -0.09005649,
   -0.07521348,
   -0.1046703,
   0.002588472};
   Double_t Graph0_fex1197[15] = {
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
   Double_t Graph0_fey1197[15] = {
   0.888521,
   0.1659513,
   0.05594277,
   0.04335651,
   0.03833817,
   0.03548948,
   0.0332363,
   0.03156064,
   0.03071251,
   0.03077405,
   0.03188105,
   0.03434911,
   0.03654948,
   0.03720263,
   0.05167119};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1197,Graph0_fy1197,Graph0_fex1197,Graph0_fey1197);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01197 = new TH1F("Graph_Graph01197","S18",100,0,3300);
   Graph_Graph01197->SetMinimum(-3.972075);
   Graph_Graph01197->SetMaximum(0.4202901);
   Graph_Graph01197->SetDirectory(0);
   Graph_Graph01197->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01197->SetLineColor(ci);
   Graph_Graph01197->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01197->GetXaxis()->SetRange(0,93);
   Graph_Graph01197->GetXaxis()->CenterTitle(true);
   Graph_Graph01197->GetXaxis()->SetLabelFont(42);
   Graph_Graph01197->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01197->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01197->GetXaxis()->SetTitleFont(42);
   Graph_Graph01197->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01197->GetYaxis()->CenterTitle(true);
   Graph_Graph01197->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01197->GetYaxis()->SetLabelFont(42);
   Graph_Graph01197->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01197->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01197->GetYaxis()->SetTitleFont(42);
   Graph_Graph01197->GetZaxis()->SetLabelFont(42);
   Graph_Graph01197->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01197->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01197);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
