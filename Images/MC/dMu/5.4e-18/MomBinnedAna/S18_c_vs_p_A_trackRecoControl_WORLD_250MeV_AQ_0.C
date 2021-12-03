void S18_c_vs_p_A_trackRecoControl_WORLD_250MeV_AQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 15:33:10 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(486.3887,-1.029669e-06,3034.139,8.786113e-06);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1068[12] = {
   190.8045,
   423.1822,
   631.4187,
   875.8863,
   1123.719,
   1372.827,
   1622.036,
   1870.393,
   2118.659,
   2366.229,
   2612.858,
   2824.592};
   Double_t Graph0_fy1068[12] = {
   -0.0002081052,
   7.026309e-07,
   6.48265e-08,
   3.418791e-08,
   8.606201e-08,
   4.002826e-08,
   -6.093842e-08,
   -1.44611e-08,
   4.347246e-08,
   5.173001e-07,
   1.415485e-06,
   6.158609e-06};
   Double_t Graph0_fex1068[12] = {
   0.3507423,
   0.08314456,
   0.06369688,
   0.05981764,
   0.06076364,
   0.06322629,
   0.06706466,
   0.07319365,
   0.08364082,
   0.09932289,
   0.126322,
   0.161042};
   Double_t Graph0_fey1068[12] = {
   4.09553e-05,
   1.1916e-07,
   2.246145e-08,
   1.709457e-08,
   1.745088e-08,
   1.96556e-08,
   2.438408e-08,
   3.283714e-08,
   5.276116e-08,
   9.83535e-08,
   2.316499e-07,
   1.337893e-06};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1068,Graph0_fy1068,Graph0_fex1068,Graph0_fey1068);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01068 = new TH1F("Graph_Graph01068","S18_",100,0,3088.183);
   Graph_Graph01068->SetMinimum(-4.80907e-08);
   Graph_Graph01068->SetMaximum(7.804535e-06);
   Graph_Graph01068->SetDirectory(0);
   Graph_Graph01068->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01068->SetLineColor(ci);
   Graph_Graph01068->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01068->GetXaxis()->SetRange(25,90);
   Graph_Graph01068->GetXaxis()->CenterTitle(true);
   Graph_Graph01068->GetXaxis()->SetLabelFont(42);
   Graph_Graph01068->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01068->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01068->GetXaxis()->SetTitleFont(42);
   Graph_Graph01068->GetYaxis()->SetTitle("c / 250 MeV");
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
