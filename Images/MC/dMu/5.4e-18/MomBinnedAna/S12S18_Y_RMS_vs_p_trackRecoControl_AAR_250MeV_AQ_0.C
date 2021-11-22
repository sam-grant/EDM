void S12S18_Y_RMS_vs_p_trackRecoControl_AAR_250MeV_AQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov 22 14:17:15 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(8.435734,12.17306,3235.201,14.29722);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1084[11] = {
   452.9018,
   656.5648,
   884.8504,
   1123.532,
   1363.582,
   1601.356,
   1825.111,
   2101.291,
   2411.99,
   2637.273,
   2790.578};
   Double_t Graph0_fy1084[11] = {
   13.88299,
   13.3647,
   13.21106,
   13.14975,
   13.1008,
   13.10802,
   13.11994,
   12.77889,
   12.62764,
   12.71628,
   12.70824};
   Double_t Graph0_fex1084[11] = {
   0.2012648,
   0.1496433,
   0.1002818,
   0.09219183,
   0.1062442,
   0.1510616,
   0.3149928,
   1.812684,
   0.7390367,
   0.4036753,
   0.3580082};
   Double_t Graph0_fey1084[11] = {
   0.06020286,
   0.02086682,
   0.0131847,
   0.01194901,
   0.01383206,
   0.02042585,
   0.04862441,
   0.1977957,
   0.1005492,
   0.05312766,
   0.1029962};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1084,Graph0_fy1084,Graph0_fex1084,Graph0_fey1084);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01084 = new TH1F("Graph_Graph01084","S12S18_",100,218.877,3024.76);
   Graph_Graph01084->SetMinimum(12.38548);
   Graph_Graph01084->SetMaximum(14.08481);
   Graph_Graph01084->SetDirectory(0);
   Graph_Graph01084->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01084->SetLineColor(ci);
   Graph_Graph01084->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01084->GetXaxis()->SetRange(5,96);
   Graph_Graph01084->GetXaxis()->CenterTitle(true);
   Graph_Graph01084->GetXaxis()->SetLabelFont(42);
   Graph_Graph01084->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01084->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01084->GetXaxis()->SetTitleFont(42);
   Graph_Graph01084->GetYaxis()->SetTitle("#sigma_{y} [mm] / 250 MeV");
   Graph_Graph01084->GetYaxis()->CenterTitle(true);
   Graph_Graph01084->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01084->GetYaxis()->SetLabelFont(42);
   Graph_Graph01084->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01084->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01084->GetYaxis()->SetTitleFont(42);
   Graph_Graph01084->GetZaxis()->SetLabelFont(42);
   Graph_Graph01084->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01084->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01084);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4146231,0.9362587,0.5853769,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
