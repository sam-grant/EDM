void S12_AEDMOverMaxDiff_vs_p_trackReco_WORLD_250MeV_BQ_noVertCorr_0mm_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Apr  5 17:19:31 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-164.3781,-0.00419225,3376.081,0.01558756);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1107[11] = {
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
   Double_t Graph0_fy1107[11] = {
   0.0001952151,
   0.001286339,
   0.0008792223,
   0.001065891,
   0.001677231,
   0.001320167,
   0.002282684,
   0.001167959,
   0.001718621,
   0.00203666,
   0.00962939};
   Double_t Graph0_fex1107[11] = {
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
   Double_t Graph0_fey1107[11] = {
   0.001090829,
   0.0003966292,
   0.0002585075,
   0.0002604254,
   0.0002919742,
   0.0003335547,
   0.0003811456,
   0.0004538987,
   0.0004832711,
   0.0007598337,
   0.002661538};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1107,Graph0_fy1107,Graph0_fex1107,Graph0_fey1107);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01107 = new TH1F("Graph_Graph01107","S12_",100,217.7111,3022.035);
   Graph_Graph01107->SetMinimum(-0.002214268);
   Graph_Graph01107->SetMaximum(0.01360958);
   Graph_Graph01107->SetDirectory(0);
   Graph_Graph01107->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01107->SetLineColor(ci);
   Graph_Graph01107->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01107->GetXaxis()->SetRange(0,100);
   Graph_Graph01107->GetXaxis()->CenterTitle(true);
   Graph_Graph01107->GetXaxis()->SetLabelFont(42);
   Graph_Graph01107->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01107->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01107->GetXaxis()->SetTitleFont(42);
   Graph_Graph01107->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 250 MeV");
   Graph_Graph01107->GetYaxis()->CenterTitle(true);
   Graph_Graph01107->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01107->GetYaxis()->SetLabelFont(42);
   Graph_Graph01107->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01107->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01107->GetYaxis()->SetTitleFont(42);
   Graph_Graph01107->GetZaxis()->SetLabelFont(42);
   Graph_Graph01107->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01107->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01107);
   
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
