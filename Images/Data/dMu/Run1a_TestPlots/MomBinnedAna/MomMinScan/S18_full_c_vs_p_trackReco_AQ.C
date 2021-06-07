void S18_full_c_vs_p_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jun  7 14:58:13 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-419.65,-0.2724068,3468.85,0.1670899);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1301[15] = {
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
   Double_t Graph0_fy1301[15] = {
   0.003067174,
   0.002924129,
   0.04208004,
   0.08834699,
   0.02695335,
   -0.1075209,
   -0.1372834,
   -0.1109843,
   -0.09463698,
   -0.07364519,
   -0.05557424,
   -0.02691294,
   -0.06001335,
   -0.06369348,
   -0.1709532};
   Double_t Graph0_fex1301[15] = {
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
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1301[15] = {
   0.005650002,
   0.005649906,
   0.005624859,
   0.005493489,
   0.005409917,
   0.005454828,
   0.005596425,
   0.005853043,
   0.006249338,
   0.006874013,
   0.00778925,
   0.009153645,
   0.01133522,
   0.01460182,
   0.02820413};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1301,Graph0_fy1301,Graph0_fex1301,Graph0_fey1301);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01301 = new TH1F("Graph_Graph01301","S18",100,0,3080);
   Graph_Graph01301->SetMinimum(-0.2284571);
   Graph_Graph01301->SetMaximum(0.1231403);
   Graph_Graph01301->SetDirectory(0);
   Graph_Graph01301->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01301->SetLineColor(ci);
   Graph_Graph01301->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_Graph01301->GetXaxis()->SetRange(0,100);
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
