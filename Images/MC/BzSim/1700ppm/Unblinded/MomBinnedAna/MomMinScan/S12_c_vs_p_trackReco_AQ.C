void S12_c_vs_p_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May 13 01:12:01 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-850,-0.6198078,3650,0.08415101);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1165[15] = {
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
   Double_t Graph0_fy1165[15] = {
   -0.4895603,
   -0.4894913,
   -0.4534306,
   -0.3212251,
   -0.2526047,
   -0.2110524,
   -0.175151,
   -0.1485909,
   -0.1256188,
   -0.1129989,
   -0.09829442,
   -0.1088469,
   -0.05729242,
   -0.08827937,
   -0.1219468};
   Double_t Graph0_fex1165[15] = {
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
   Double_t Graph0_fey1165[15] = {
   0.01292104,
   0.01292083,
   0.01288608,
   0.01269965,
   0.01258052,
   0.01264729,
   0.0129227,
   0.01345409,
   0.01431201,
   0.01561171,
   0.0174831,
   0.02019268,
   0.02411695,
   0.03038087,
   0.05053594};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1165,Graph0_fy1165,Graph0_fex1165,Graph0_fey1165);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01165 = new TH1F("Graph_Graph01165","S12",100,-400,3200);
   Graph_Graph01165->SetMinimum(-0.549412);
   Graph_Graph01165->SetMaximum(0.01375512);
   Graph_Graph01165->SetDirectory(0);
   Graph_Graph01165->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01165->SetLineColor(ci);
   Graph_Graph01165->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_Graph01165->GetXaxis()->CenterTitle(true);
   Graph_Graph01165->GetXaxis()->SetLabelFont(42);
   Graph_Graph01165->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01165->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01165->GetXaxis()->SetTitleFont(42);
   Graph_Graph01165->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01165->GetYaxis()->CenterTitle(true);
   Graph_Graph01165->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01165->GetYaxis()->SetLabelFont(42);
   Graph_Graph01165->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01165->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01165->GetYaxis()->SetTitleFont(42);
   Graph_Graph01165->GetZaxis()->SetLabelFont(42);
   Graph_Graph01165->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01165->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01165);
   
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
