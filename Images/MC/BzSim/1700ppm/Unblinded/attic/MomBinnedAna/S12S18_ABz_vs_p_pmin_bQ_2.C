void S12S18_ABz_vs_p_pmin_bQ_2()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  4 16:58:22 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(200,0.104383,2600,0.2306918);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1326[9] = {
   600,
   800,
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2200};
   Double_t Graph0_fy1326[9] = {
   0.1518792,
   0.1526187,
   0.1501383,
   0.1571137,
   0.1509899,
   0.141206,
   0.1451078,
   0.1476523,
   0.1771968};
   Double_t Graph0_fex1326[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1326[9] = {
   0.008570193,
   0.01210024,
   0.01229881,
   0.01283772,
   0.01377276,
   0.01527889,
   0.01778956,
   0.02221784,
   0.03244358};
   TGraphErrors *gre = new TGraphErrors(9,Graph0_fx1326,Graph0_fy1326,Graph0_fex1326,Graph0_fey1326);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01326 = new TH1F("Graph_Graph01326","S12S18",100,440,2360);
   Graph_Graph01326->SetMinimum(0.1170139);
   Graph_Graph01326->SetMaximum(0.2180609);
   Graph_Graph01326->SetDirectory(0);
   Graph_Graph01326->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01326->SetLineColor(ci);
   Graph_Graph01326->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_Graph01326->GetXaxis()->CenterTitle(true);
   Graph_Graph01326->GetXaxis()->SetLabelFont(42);
   Graph_Graph01326->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01326->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01326->GetXaxis()->SetTitleFont(42);
   Graph_Graph01326->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_Graph01326->GetYaxis()->CenterTitle(true);
   Graph_Graph01326->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01326->GetYaxis()->SetLabelFont(42);
   Graph_Graph01326->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01326->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01326->GetYaxis()->SetTitleFont(42);
   Graph_Graph01326->GetZaxis()->SetLabelFont(42);
   Graph_Graph01326->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01326->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01326);
   
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
