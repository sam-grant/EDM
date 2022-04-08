void S12_c_vs_p_thetaY_trackReco_WORLD_250MeV_BQ_noVertCorr_0mm_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Apr  5 17:19:31 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-164.3781,-2.048333,3376.081,6.61883);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1094[11] = {
   451.5498,
   653.3939,
   880.0628,
   1123.153,
   1371.24,
   1619.947,
   1867.163,
   2114.835,
   2362.441,
   2614.458,
   2788.038};
   Double_t Graph0_fy1094[11] = {
   5.038108,
   -0.3737328,
   -0.5773434,
   -0.4631283,
   -0.3571625,
   -0.3260599,
   -0.2276017,
   -0.1849982,
   -0.14805,
   -0.1207454,
   -0.1742425};
   Double_t Graph0_fex1094[11] = {
   0.1450545,
   0.1227995,
   0.08906524,
   0.08706518,
   0.09294933,
   0.1024967,
   0.1195046,
   0.1498014,
   0.1962366,
   0.2402987,
   0.30333};
   Double_t Graph0_fey1094[11] = {
   0.1361946,
   0.04606385,
   0.02646203,
   0.02173917,
   0.01993924,
   0.01900144,
   0.01911805,
   0.02052363,
   0.02282507,
   0.02359178,
   0.05718506};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1094,Graph0_fy1094,Graph0_fex1094,Graph0_fey1094);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01094 = new TH1F("Graph_Graph01094","S12_",100,217.7111,3022.035);
   Graph_Graph01094->SetMinimum(-1.181616);
   Graph_Graph01094->SetMaximum(5.752114);
   Graph_Graph01094->SetDirectory(0);
   Graph_Graph01094->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01094->SetLineColor(ci);
   Graph_Graph01094->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01094->GetXaxis()->SetRange(0,100);
   Graph_Graph01094->GetXaxis()->CenterTitle(true);
   Graph_Graph01094->GetXaxis()->SetLabelFont(42);
   Graph_Graph01094->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01094->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01094->GetXaxis()->SetTitleFont(42);
   Graph_Graph01094->GetYaxis()->SetTitle("c [mrad] / 250 MeV");
   Graph_Graph01094->GetYaxis()->CenterTitle(true);
   Graph_Graph01094->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01094->GetYaxis()->SetLabelFont(42);
   Graph_Graph01094->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01094->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01094->GetYaxis()->SetTitleFont(42);
   Graph_Graph01094->GetZaxis()->SetLabelFont(42);
   Graph_Graph01094->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01094->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01094);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4466583,0.9362587,0.5533417,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
