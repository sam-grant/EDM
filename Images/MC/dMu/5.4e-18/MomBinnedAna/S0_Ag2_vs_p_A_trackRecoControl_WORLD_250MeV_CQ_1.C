void S0_Ag2_vs_p_A_trackRecoControl_WORLD_250MeV_CQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec 14 16:27:31 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-389.9794,-0.000235593,3509.814,0.002057357);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1064[12] = {
   191.2482,
   435.2369,
   652.4289,
   883.6659,
   1126.229,
   1373.859,
   1622.425,
   1870.722,
   2119.361,
   2367.038,
   2613.854,
   2825.256};
   Double_t Graph0_fy1064[12] = {
   0.0006926767,
   -3.236393e-06,
   -2.112011e-07,
   -6.221806e-08,
   -4.536588e-08,
   9.581198e-08,
   -6.962784e-08,
   5.711852e-08,
   1.076188e-07,
   -1.379136e-07,
   -1.040481e-06,
   -3.423267e-06};
   Double_t Graph0_fex1064[12] = {
   1.118774,
   0.1970657,
   0.1111295,
   0.07528278,
   0.06973481,
   0.06961886,
   0.07258618,
   0.07835664,
   0.08830407,
   0.1035468,
   0.1290676,
   0.160519};
   Double_t Graph0_fey1064[12] = {
   0.001007454,
   2.522613e-06,
   1.77389e-07,
   4.956044e-08,
   3.728745e-08,
   3.710291e-08,
   4.281788e-08,
   5.563794e-08,
   8.441757e-08,
   1.495513e-07,
   3.242578e-07,
   1.692135e-06};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1064,Graph0_fy1064,Graph0_fex1064,Graph0_fey1064);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01064 = new TH1F("Graph_Graph01064","S0_",100,0,3088.946);
   Graph_Graph01064->SetMinimum(-6.298043e-06);
   Graph_Graph01064->SetMaximum(0.001828062);
   Graph_Graph01064->SetDirectory(0);
   Graph_Graph01064->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01064->SetLineColor(ci);
   Graph_Graph01064->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01064->GetXaxis()->SetRange(1,101);
   Graph_Graph01064->GetXaxis()->CenterTitle(true);
   Graph_Graph01064->GetXaxis()->SetLabelFont(42);
   Graph_Graph01064->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01064->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01064->GetXaxis()->SetTitleFont(42);
   Graph_Graph01064->GetYaxis()->SetTitle("A_{g#minus2} / 250 MeV");
   Graph_Graph01064->GetYaxis()->CenterTitle(true);
   Graph_Graph01064->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01064->GetYaxis()->SetLabelFont(42);
   Graph_Graph01064->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01064->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01064->GetYaxis()->SetTitleFont(42);
   Graph_Graph01064->GetZaxis()->SetLabelFont(42);
   Graph_Graph01064->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01064->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01064);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4567085,0.9362587,0.5432915,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
