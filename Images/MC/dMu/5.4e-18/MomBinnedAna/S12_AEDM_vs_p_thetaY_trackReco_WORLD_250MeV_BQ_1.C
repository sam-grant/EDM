void S12_AEDM_vs_p_thetaY_trackReco_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 02:59:07 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-163.9079,-0.1071511,3375.532,0.2507486);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1095[11] = {
   451.7953,
   653.3733,
   880.2915,
   1123.18,
   1371.135,
   1620.251,
   1866.95,
   2115.048,
   2362.624,
   2614.339,
   2787.765};
   Double_t Graph0_fy1095[11] = {
   0.07179875,
   0.09514243,
   0.09025012,
   0.1264097,
   0.1146398,
   0.1437674,
   0.1332939,
   0.1196296,
   0.07736023,
   0.07972845,
   0.04167378};
   Double_t Graph0_fex1095[11] = {
   0.09758406,
   0.08244237,
   0.0597378,
   0.05837816,
   0.06217097,
   0.06865415,
   0.08013113,
   0.1003896,
   0.1310277,
   0.1612163,
   0.1970798};
   Double_t Graph0_fey1095[11] = {
   0.1192999,
   0.04003199,
   0.0230115,
   0.01891883,
   0.01728099,
   0.01640679,
   0.01650472,
   0.01747428,
   0.01880789,
   0.01869694,
   0.04288492};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1095,Graph0_fy1095,Graph0_fex1095,Graph0_fey1095);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01095 = new TH1F("Graph_Graph01095","S12_",100,218.0713,3021.588);
   Graph_Graph01095->SetMinimum(-0.07136114);
   Graph_Graph01095->SetMaximum(0.2149586);
   Graph_Graph01095->SetDirectory(0);
   Graph_Graph01095->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01095->SetLineColor(ci);
   Graph_Graph01095->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01095->GetXaxis()->SetRange(0,100);
   Graph_Graph01095->GetXaxis()->CenterTitle(true);
   Graph_Graph01095->GetXaxis()->SetLabelFont(42);
   Graph_Graph01095->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01095->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01095->GetXaxis()->SetTitleFont(42);
   Graph_Graph01095->GetYaxis()->SetTitle("A_{EDM} [mrad] / 250 MeV");
   Graph_Graph01095->GetYaxis()->CenterTitle(true);
   Graph_Graph01095->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01095->GetYaxis()->SetLabelFont(42);
   Graph_Graph01095->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01095->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01095->GetYaxis()->SetTitleFont(42);
   Graph_Graph01095->GetZaxis()->SetLabelFont(42);
   Graph_Graph01095->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01095->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01095);
   
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
