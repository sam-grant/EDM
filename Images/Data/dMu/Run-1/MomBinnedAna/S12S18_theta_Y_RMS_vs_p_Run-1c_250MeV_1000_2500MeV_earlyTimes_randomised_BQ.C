void S12S18_theta_Y_RMS_vs_p_Run-1c_250MeV_1000_2500MeV_earlyTimes_randomised_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun 12 11:31:59 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(785.2687,2.50397,2704.427,25.42315);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1109[11] = {
   456.2261,
   654.8472,
   884.1329,
   1127.672,
   1373.373,
   1620.057,
   1867.064,
   2116.137,
   2359.716,
   2607.214,
   2782.096};
   Double_t Graph0_fy1109[11] = {
   31.13539,
   24.46018,
   19.45856,
   16.65696,
   14.5294,
   12.5988,
   10.66927,
   8.977741,
   7.394851,
   5.890211,
   5.044355};
   Double_t Graph0_fex1109[11] = {
   0.1219439,
   0.08528496,
   0.05671517,
   0.05129779,
   0.05046572,
   0.05574313,
   0.06765675,
   0.08499686,
   0.1107314,
   0.1542779,
   0.2601466};
   Double_t Graph0_fey1109[11] = {
   0.08522986,
   0.02166184,
   0.01102017,
   0.008361142,
   0.007263401,
   0.006970491,
   0.007119821,
   0.007519003,
   0.008184603,
   0.00943571,
   0.03517986};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1109,Graph0_fy1109,Graph0_fex1109,Graph0_fey1109);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01109 = new TH1F("Graph_Graph01109","S12S18",100,223.4789,3014.981);
   Graph_Graph01109->SetMinimum(4.795888);
   Graph_Graph01109->SetMaximum(23.13123);
   Graph_Graph01109->SetDirectory(0);
   Graph_Graph01109->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01109->SetLineColor(ci);
   Graph_Graph01109->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01109->GetXaxis()->SetRange(28,82);
   Graph_Graph01109->GetXaxis()->CenterTitle(true);
   Graph_Graph01109->GetXaxis()->SetLabelFont(42);
   Graph_Graph01109->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01109->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01109->GetXaxis()->SetTitleFont(42);
   Graph_Graph01109->GetYaxis()->SetTitle("#sigma#theta_{y} [mrad] / 250 MeV");
   Graph_Graph01109->GetYaxis()->CenterTitle(true);
   Graph_Graph01109->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01109->GetYaxis()->SetLabelFont(42);
   Graph_Graph01109->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01109->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01109->GetYaxis()->SetTitleFont(42);
   Graph_Graph01109->GetZaxis()->SetLabelFont(42);
   Graph_Graph01109->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01109->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01109);
   
   gre->Draw("alp");
   
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
