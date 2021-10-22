void S18_c_vs_p_sym_tmp()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  4 23:01:03 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.2500001,-0.1007381,7.25,1.063874);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1303[6] = {
   1,
   2,
   3,
   4,
   5,
   6};
   Double_t Graph0_fy1303[6] = {
   0.1264404,
   0.2883078,
   0.3965835,
   0.5113403,
   0.6331977,
   0.7896659};
   Double_t Graph0_fex1303[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1303[6] = {
   0.03307634,
   0.03328673,
   0.03476511,
   0.03843227,
   0.04738915,
   0.08010649};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1303,Graph0_fy1303,Graph0_fex1303,Graph0_fey1303);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01303 = new TH1F("Graph_Graph01303","S18",100,0.5,6.5);
   Graph_Graph01303->SetMinimum(0.0157232);
   Graph_Graph01303->SetMaximum(0.9474132);
   Graph_Graph01303->SetDirectory(0);
   Graph_Graph01303->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01303->SetLineColor(ci);
   Graph_Graph01303->GetXaxis()->SetTitle("p_{sym} [MeV]");
   Graph_Graph01303->GetXaxis()->CenterTitle(true);
   Graph_Graph01303->GetXaxis()->SetLabelFont(42);
   Graph_Graph01303->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01303->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01303->GetXaxis()->SetTitleFont(42);
   Graph_Graph01303->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01303->GetYaxis()->CenterTitle(true);
   Graph_Graph01303->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01303->GetYaxis()->SetLabelFont(42);
   Graph_Graph01303->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01303->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01303->GetYaxis()->SetTitleFont(42);
   Graph_Graph01303->GetZaxis()->SetLabelFont(42);
   Graph_Graph01303->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01303->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01303);
   
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
