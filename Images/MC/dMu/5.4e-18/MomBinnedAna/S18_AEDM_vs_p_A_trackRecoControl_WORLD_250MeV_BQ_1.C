void S18_AEDM_vs_p_A_trackRecoControl_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Dec  5 19:39:17 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(467.8646,-0.002757819,3028.281,0.0004850741);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1069[11] = {
   452.9528,
   656.7601,
   885.1569,
   1123.522,
   1363.641,
   1601.139,
   1825.071,
   2101.94,
   2409.845,
   2636.475,
   2790.432};
   Double_t Graph0_fy1069[11] = {
   5.382844e-05,
   1.374351e-06,
   -3.221498e-07,
   -5.691087e-07,
   -7.858282e-07,
   4.289447e-08,
   1.60724e-05,
   -0.003063492,
   0.0001341162,
   -5.422078e-05,
   -0.0001667445};
   Double_t Graph0_fex1069[11] = {
   0.2870025,
   0.2125646,
   0.142451,
   0.1308511,
   0.1511894,
   0.2145765,
   0.4527067,
   2.643443,
   1.048101,
   0.5726681,
   0.5138775};
   Double_t Graph0_fey1069[11] = {
   2.660607e-05,
   1.254675e-06,
   3.29561e-07,
   2.480739e-07,
   3.91198e-07,
   1.251206e-06,
   1.709557e-05,
   0.001197067,
   0.0001527458,
   2.262929e-05,
   0.0001550765};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1069,Graph0_fy1069,Graph0_fex1069,Graph0_fey1069);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01069 = new TH1F("Graph_Graph01069","S18_",100,218.8378,3024.773);
   Graph_Graph01069->SetMinimum(-0.00243353);
   Graph_Graph01069->SetMaximum(0.0001607847);
   Graph_Graph01069->SetDirectory(0);
   Graph_Graph01069->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01069->SetLineColor(ci);
   Graph_Graph01069->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01069->GetXaxis()->SetRange(19,91);
   Graph_Graph01069->GetXaxis()->CenterTitle(true);
   Graph_Graph01069->GetXaxis()->SetLabelFont(42);
   Graph_Graph01069->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01069->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01069->GetXaxis()->SetTitleFont(42);
   Graph_Graph01069->GetYaxis()->SetTitle("A_{EDM} / 250 MeV");
   Graph_Graph01069->GetYaxis()->CenterTitle(true);
   Graph_Graph01069->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01069->GetYaxis()->SetLabelFont(42);
   Graph_Graph01069->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01069->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01069->GetYaxis()->SetTitleFont(42);
   Graph_Graph01069->GetZaxis()->SetLabelFont(42);
   Graph_Graph01069->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01069->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01069);
   
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
