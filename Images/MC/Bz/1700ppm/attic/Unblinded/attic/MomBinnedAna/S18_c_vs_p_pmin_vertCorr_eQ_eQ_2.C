void S18_c_vs_p_pmin_vertCorr_eQ_eQ_2()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  4 23:13:25 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(200,0.3600269,2600,1.416695);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1301[9] = {
   600,
   800,
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2200};
   Double_t Graph0_fy1301[9] = {
   0.5692157,
   0.7537895,
   0.8883099,
   1.001631,
   1.102135,
   1.205361,
   1.200006,
   1.13077,
   1.03111};
   Double_t Graph0_fex1301[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1301[9] = {
   0.03307736,
   0.0325331,
   0.03237789,
   0.03267399,
   0.03358937,
   0.03522329,
   0.03785612,
   0.04206886,
   0.04844446};
   TGraphErrors *gre = new TGraphErrors(9,Graph0_fx1301,Graph0_fy1301,Graph0_fex1301,Graph0_fey1301);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01301 = new TH1F("Graph_Graph01301","S18",100,440,2360);
   Graph_Graph01301->SetMinimum(0.4656938);
   Graph_Graph01301->SetMaximum(1.311028);
   Graph_Graph01301->SetDirectory(0);
   Graph_Graph01301->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01301->SetLineColor(ci);
   Graph_Graph01301->GetXaxis()->SetTitle("p_{min} MeV");
   Graph_Graph01301->GetXaxis()->CenterTitle(true);
   Graph_Graph01301->GetXaxis()->SetLabelFont(42);
   Graph_Graph01301->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01301->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01301->GetXaxis()->SetTitleFont(42);
   Graph_Graph01301->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01301->GetYaxis()->CenterTitle(true);
   Graph_Graph01301->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01301->GetYaxis()->SetLabelFont(42);
   Graph_Graph01301->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01301->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01301->GetYaxis()->SetTitleFont(42);
   Graph_Graph01301->GetZaxis()->SetLabelFont(42);
   Graph_Graph01301->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01301->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01301);
   
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
