void S0_eAEDM_vs_p_A_trackReco_WORLD_250MeV_BQ.reweight_1()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Feb  3 10:51:45 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-168.1328,-9.794977e-06,3409.443,8.867876e-05);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1068[11] = {
   451.6521,
   653.2702,
   879.9265,
   1123.052,
   1371.41,
   1620.742,
   1868,
   2116.568,
   2363.186,
   2615.293,
   2789.549};
   Double_t Graph0_fy1068[11] = {
   3.104877e-06,
   2.037776e-07,
   7.099563e-08,
   6.542695e-08,
   7.888528e-08,
   1.055725e-07,
   1.588435e-07,
   2.785939e-07,
   5.39697e-07,
   1.043902e-06,
   1.967355e-05};
   Double_t Graph0_fex1068[11] = {
   0.1393969,
   0.1178818,
   0.08603497,
   0.08412457,
   0.08954346,
   0.09886091,
   0.1134618,
   0.1374016,
   0.1719492,
   0.2153454,
   0.2482986};
   Double_t Graph0_fey1068[11] = {
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
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1068,Graph0_fy1068,Graph0_fex1068,Graph0_fey1068);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01068 = new TH1F("Graph_Graph01068","S0_",100,217.6843,3023.626);
   Graph_Graph01068->SetMinimum(5.239749e-08);
   Graph_Graph01068->SetMaximum(7.883139e-05);
   Graph_Graph01068->SetDirectory(0);
   Graph_Graph01068->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01068->SetLineColor(ci);
   Graph_Graph01068->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01068->GetXaxis()->SetRange(0,101);
   Graph_Graph01068->GetXaxis()->CenterTitle(true);
   Graph_Graph01068->GetXaxis()->SetLabelFont(42);
   Graph_Graph01068->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01068->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01068->GetXaxis()->SetTitleFont(42);
   Graph_Graph01068->GetYaxis()->SetTitle("#deltaA_{EDM} / 250 MeV");
   Graph_Graph01068->GetYaxis()->CenterTitle(true);
   Graph_Graph01068->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01068->GetYaxis()->SetLabelFont(42);
   Graph_Graph01068->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01068->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01068->GetYaxis()->SetTitleFont(42);
   Graph_Graph01068->GetZaxis()->SetLabelFont(42);
   Graph_Graph01068->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01068->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01068);
   
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
