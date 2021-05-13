void S12_c_vs_p_pmin_bQ_2()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  4 16:58:10 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(200,-0.4942714,2600,-0.03608461);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1169[9] = {
   600,
   800,
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2200};
   Double_t Graph0_fy1169[9] = {
   -0.4093672,
   -0.3916378,
   -0.3424788,
   -0.3017973,
   -0.238036,
   -0.187728,
   -0.1479781,
   -0.1343917,
   -0.1453984};
   Double_t Graph0_fex1169[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1169[9] = {
   0.008539696,
   0.01205415,
   0.01223303,
   0.01274144,
   0.01365521,
   0.01511244,
   0.01757099,
   0.02194258,
   0.03183698};
   TGraphErrors *gre = new TGraphErrors(9,Graph0_fx1169,Graph0_fy1169,Graph0_fex1169,Graph0_fey1169);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01169 = new TH1F("Graph_Graph01169","S12",100,440,2360);
   Graph_Graph01169->SetMinimum(-0.4484527);
   Graph_Graph01169->SetMaximum(-0.08190329);
   Graph_Graph01169->SetDirectory(0);
   Graph_Graph01169->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01169->SetLineColor(ci);
   Graph_Graph01169->GetXaxis()->SetTitle("p_{min} MeV");
   Graph_Graph01169->GetXaxis()->CenterTitle(true);
   Graph_Graph01169->GetXaxis()->SetLabelFont(42);
   Graph_Graph01169->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01169->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01169->GetXaxis()->SetTitleFont(42);
   Graph_Graph01169->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01169->GetYaxis()->CenterTitle(true);
   Graph_Graph01169->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01169->GetYaxis()->SetLabelFont(42);
   Graph_Graph01169->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01169->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01169->GetYaxis()->SetTitleFont(42);
   Graph_Graph01169->GetZaxis()->SetLabelFont(42);
   Graph_Graph01169->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01169->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01169);
   
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
