void S0S12S18_theta_Y_RMS_vs_p_trackReco_WORLD_250MeV_BQ_noVertCorr_0mm_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Apr  5 17:19:43 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-164.1816,-1.676318,3376.429,37.80406);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1211[11] = {
   451.7157,
   653.3507,
   880.1781,
   1123.184,
   1371.195,
   1620.115,
   1867.188,
   2115.267,
   2363.117,
   2614.283,
   2788.487};
   Double_t Graph0_fy1211[11] = {
   31.16507,
   25.77927,
   21.22309,
   17.96776,
   15.42991,
   13.27045,
   11.37869,
   9.626411,
   7.940062,
   6.24108,
   4.924341};
   Double_t Graph0_fex1211[11] = {
   0.08814924,
   0.07472162,
   0.05425532,
   0.05305649,
   0.05669065,
   0.06278754,
   0.07311978,
   0.09089229,
   0.1177353,
   0.1440608,
   0.177481};
   Double_t Graph0_fey1211[11] = {
   0.05892213,
   0.01977662,
   0.01137855,
   0.009360924,
   0.00859344,
   0.008198314,
   0.008196913,
   0.008621028,
   0.009225361,
   0.009107717,
   0.02059546};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1211,Graph0_fy1211,Graph0_fex1211,Graph0_fey1211);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01211 = new TH1F("Graph_Graph01211","S0S12S18_",100,217.9239,3022.368);
   Graph_Graph01211->SetMinimum(2.27172);
   Graph_Graph01211->SetMaximum(33.85602);
   Graph_Graph01211->SetDirectory(0);
   Graph_Graph01211->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01211->SetLineColor(ci);
   Graph_Graph01211->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01211->GetXaxis()->SetRange(0,100);
   Graph_Graph01211->GetXaxis()->CenterTitle(true);
   Graph_Graph01211->GetXaxis()->SetLabelFont(42);
   Graph_Graph01211->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01211->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01211->GetXaxis()->SetTitleFont(42);
   Graph_Graph01211->GetYaxis()->SetTitle("#sigma#theta_{y} [mrad] / 250 MeV");
   Graph_Graph01211->GetYaxis()->CenterTitle(true);
   Graph_Graph01211->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01211->GetYaxis()->SetLabelFont(42);
   Graph_Graph01211->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01211->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01211->GetYaxis()->SetTitleFont(42);
   Graph_Graph01211->GetZaxis()->SetLabelFont(42);
   Graph_Graph01211->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01211->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01211);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.3920101,0.9362587,0.6079899,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
