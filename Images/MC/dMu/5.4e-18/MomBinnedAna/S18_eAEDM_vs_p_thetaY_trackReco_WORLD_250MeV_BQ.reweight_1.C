void S18_eAEDM_vs_p_thetaY_trackReco_WORLD_250MeV_BQ.reweight_1()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Feb  3 10:51:53 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.0201,-0.04352559,3406.608,0.5530778);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1141[11] = {
   452.0609,
   653.2722,
   880.5507,
   1123.017,
   1370.779,
   1619.705,
   1866.411,
   2115.026,
   2363.263,
   2612.185,
   2787.396};
   Double_t Graph0_fy1141[11] = {
   0.1456093,
   0.04881549,
   0.02784607,
   0.02286619,
   0.02110304,
   0.02016805,
   0.02048654,
   0.02168494,
   0.02355649,
   0.02311212,
   0.0551088};
   Double_t Graph0_fex1141[11] = {
   0.1193482,
   0.1008813,
   0.0726896,
   0.07092989,
   0.07614717,
   0.08434879,
   0.09945954,
   0.1250774,
   0.1642086,
   0.1964878,
   0.2503732};
   Double_t Graph0_fey1141[11] = {
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
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1141,Graph0_fy1141,Graph0_fex1141,Graph0_fey1141);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01141 = new TH1F("Graph_Graph01141","S18_",100,218.3711,3021.216);
   Graph_Graph01141->SetMinimum(0.01613475);
   Graph_Graph01141->SetMaximum(0.4934174);
   Graph_Graph01141->SetDirectory(0);
   Graph_Graph01141->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01141->SetLineColor(ci);
   Graph_Graph01141->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01141->GetXaxis()->SetRange(0,101);
   Graph_Graph01141->GetXaxis()->CenterTitle(true);
   Graph_Graph01141->GetXaxis()->SetLabelFont(42);
   Graph_Graph01141->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01141->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01141->GetXaxis()->SetTitleFont(42);
   Graph_Graph01141->GetYaxis()->SetTitle("#deltaA_{EDM} [mrad] / 250 MeV");
   Graph_Graph01141->GetYaxis()->CenterTitle(true);
   Graph_Graph01141->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01141->GetYaxis()->SetLabelFont(42);
   Graph_Graph01141->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01141->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01141->GetYaxis()->SetTitleFont(42);
   Graph_Graph01141->GetZaxis()->SetLabelFont(42);
   Graph_Graph01141->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01141->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01141);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4466583,0.9362587,0.5533417,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
