void S12S18_theta_Y_RMS_vs_p_Run-1b_250MeV_1000_2500MeV_BQ_noRand()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jun  9 16:51:16 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(786.0401,2.578962,2711.592,25.53072);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1109[11] = {
   455.8567,
   655.0535,
   884.0623,
   1127.583,
   1373.388,
   1620.027,
   1866.939,
   2116.33,
   2359.577,
   2607.956,
   2789.593};
   Double_t Graph0_fy1109[11] = {
   31.41051,
   24.55118,
   19.54768,
   16.72522,
   14.58442,
   12.63976,
   10.7198,
   9.034906,
   7.448263,
   5.987038,
   5.412191};
   Double_t Graph0_fex1109[11] = {
   0.07797519,
   0.05480456,
   0.03656901,
   0.03312465,
   0.03248778,
   0.03579317,
   0.04343275,
   0.05456016,
   0.07125235,
   0.09844146,
   0.1884154};
   Double_t Graph0_fey1109[11] = {
   0.05508683,
   0.01399451,
   0.007135383,
   0.005422747,
   0.004700102,
   0.004493524,
   0.004595072,
   0.004859075,
   0.005303072,
   0.006101755,
   0.02136288};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1109,Graph0_fy1109,Graph0_fex1109,Graph0_fey1109);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01109 = new TH1F("Graph_Graph01109","S12S18",100,222.3785,3023.181);
   Graph_Graph01109->SetMinimum(4.874138);
   Graph_Graph01109->SetMaximum(23.23555);
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
