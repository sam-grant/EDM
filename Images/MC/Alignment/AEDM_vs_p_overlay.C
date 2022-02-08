void AEDM_vs_p_overlay()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Feb  7 12:39:34 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(-167.8666,-0.4032121,3408.396,0.2419748);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0S12S18_AEDM_vs_p_thetaY_fx1001[11] = {
   451.659,
   653.2657,
   880.1279,
   1123.231,
   1371.133,
   1620.235,
   1867.214,
   2115.292,
   2363.173,
   2614.459,
   2788.765};
   Double_t S0S12S18_AEDM_vs_p_thetaY_fy1001[11] = {
   -0.02260801,
   0.1238514,
   0.1097536,
   0.09856401,
   0.1481066,
   0.1382427,
   0.1372639,
   0.08170388,
   0.05579579,
   0.07083978,
   0.07456022};
   Double_t S0S12S18_AEDM_vs_p_thetaY_fex1001[11] = {
   0.1075884,
   0.09102427,
   0.06612789,
   0.0646936,
   0.06912037,
   0.07656613,
   0.08888033,
   0.1102604,
   0.142321,
   0.1745629,
   0.2132146};
   Double_t S0S12S18_AEDM_vs_p_thetaY_fey1001[11] = {
   0.1315032,
   0.0441005,
   0.02546407,
   0.02090304,
   0.01921635,
   0.01831578,
   0.01828729,
   0.01921632,
   0.02048669,
   0.02021234,
   0.04481433};
   TGraphErrors *gre = new TGraphErrors(11,S0S12S18_AEDM_vs_p_thetaY_fx1001,S0S12S18_AEDM_vs_p_thetaY_fy1001,S0S12S18_AEDM_vs_p_thetaY_fex1001,S0S12S18_AEDM_vs_p_thetaY_fey1001);
   gre->SetName("S0S12S18_AEDM_vs_p_thetaY");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0S12S18_AEDM_vs_p_thetaY1001 = new TH1F("Graph_S0S12S18_AEDM_vs_p_thetaY1001","",100,217.8088,3022.72);
   Graph_S0S12S18_AEDM_vs_p_thetaY1001->SetMinimum(-0.3386934);
   Graph_S0S12S18_AEDM_vs_p_thetaY1001->SetMaximum(0.1774561);
   Graph_S0S12S18_AEDM_vs_p_thetaY1001->SetDirectory(0);
   Graph_S0S12S18_AEDM_vs_p_thetaY1001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0S12S18_AEDM_vs_p_thetaY1001->SetLineColor(ci);
   Graph_S0S12S18_AEDM_vs_p_thetaY1001->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S0S12S18_AEDM_vs_p_thetaY1001->GetXaxis()->SetRange(0,101);
   Graph_S0S12S18_AEDM_vs_p_thetaY1001->GetXaxis()->CenterTitle(true);
   Graph_S0S12S18_AEDM_vs_p_thetaY1001->GetXaxis()->SetLabelFont(42);
   Graph_S0S12S18_AEDM_vs_p_thetaY1001->GetXaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_AEDM_vs_p_thetaY1001->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0S12S18_AEDM_vs_p_thetaY1001->GetXaxis()->SetTitleFont(42);
   Graph_S0S12S18_AEDM_vs_p_thetaY1001->GetYaxis()->SetTitle("A_{EDM} [mrad] / 250 MeV");
   Graph_S0S12S18_AEDM_vs_p_thetaY1001->GetYaxis()->CenterTitle(true);
   Graph_S0S12S18_AEDM_vs_p_thetaY1001->GetYaxis()->SetNdivisions(4000510);
   Graph_S0S12S18_AEDM_vs_p_thetaY1001->GetYaxis()->SetLabelFont(42);
   Graph_S0S12S18_AEDM_vs_p_thetaY1001->GetYaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_AEDM_vs_p_thetaY1001->GetYaxis()->SetTitleOffset(1.2);
   Graph_S0S12S18_AEDM_vs_p_thetaY1001->GetYaxis()->SetTitleFont(42);
   Graph_S0S12S18_AEDM_vs_p_thetaY1001->GetZaxis()->SetLabelFont(42);
   Graph_S0S12S18_AEDM_vs_p_thetaY1001->GetZaxis()->SetTitleOffset(1);
   Graph_S0S12S18_AEDM_vs_p_thetaY1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0S12S18_AEDM_vs_p_thetaY1001);
   
   gre->Draw("ap");
   
   Double_t S0S12S18_AEDM_vs_p_thetaY_fx1002[11] = {
   451.6112,
   653.1541,
   880.085,
   1123.204,
   1371.069,
   1620.186,
   1867.124,
   2115.282,
   2363.183,
   2614.691,
   2788.688};
   Double_t S0S12S18_AEDM_vs_p_thetaY_fy1002[11] = {
   0.00426304,
   0.1697988,
   0.1330373,
   0.1170663,
   0.1542671,
   0.1470943,
   0.1530114,
   0.09384348,
   0.06867912,
   0.07262226,
   0.07077983};
   Double_t S0S12S18_AEDM_vs_p_thetaY_fex1002[11] = {
   0.1107381,
   0.09418109,
   0.06848963,
   0.06711431,
   0.07174528,
   0.07961856,
   0.09256173,
   0.1151041,
   0.1486707,
   0.1826897,
   0.2225177};
   Double_t S0S12S18_AEDM_vs_p_thetaY_fey1002[11] = {
   0.1475899,
   0.04973347,
   0.02877186,
   0.02365565,
   0.02178036,
   0.02078451,
   0.02080874,
   0.02189767,
   0.0233405,
   0.02304035,
   0.051383};
   gre = new TGraphErrors(11,S0S12S18_AEDM_vs_p_thetaY_fx1002,S0S12S18_AEDM_vs_p_thetaY_fy1002,S0S12S18_AEDM_vs_p_thetaY_fex1002,S0S12S18_AEDM_vs_p_thetaY_fey1002);
   gre->SetName("S0S12S18_AEDM_vs_p_thetaY");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_S0S12S18_AEDM_vs_p_thetaY1002 = new TH1F("Graph_S0S12S18_AEDM_vs_p_thetaY1002","S0S12S18_",100,217.7594,3022.651);
   Graph_S0S12S18_AEDM_vs_p_thetaY1002->SetMinimum(-0.3590389);
   Graph_S0S12S18_AEDM_vs_p_thetaY1002->SetMaximum(0.2024277);
   Graph_S0S12S18_AEDM_vs_p_thetaY1002->SetDirectory(0);
   Graph_S0S12S18_AEDM_vs_p_thetaY1002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S0S12S18_AEDM_vs_p_thetaY1002->SetLineColor(ci);
   Graph_S0S12S18_AEDM_vs_p_thetaY1002->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S0S12S18_AEDM_vs_p_thetaY1002->GetXaxis()->SetRange(0,101);
   Graph_S0S12S18_AEDM_vs_p_thetaY1002->GetXaxis()->CenterTitle(true);
   Graph_S0S12S18_AEDM_vs_p_thetaY1002->GetXaxis()->SetLabelFont(42);
   Graph_S0S12S18_AEDM_vs_p_thetaY1002->GetXaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_AEDM_vs_p_thetaY1002->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0S12S18_AEDM_vs_p_thetaY1002->GetXaxis()->SetTitleFont(42);
   Graph_S0S12S18_AEDM_vs_p_thetaY1002->GetYaxis()->SetTitle("A_{EDM} [mrad] / 250 MeV");
   Graph_S0S12S18_AEDM_vs_p_thetaY1002->GetYaxis()->CenterTitle(true);
   Graph_S0S12S18_AEDM_vs_p_thetaY1002->GetYaxis()->SetNdivisions(4000510);
   Graph_S0S12S18_AEDM_vs_p_thetaY1002->GetYaxis()->SetLabelFont(42);
   Graph_S0S12S18_AEDM_vs_p_thetaY1002->GetYaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_AEDM_vs_p_thetaY1002->GetYaxis()->SetTitleOffset(1.2);
   Graph_S0S12S18_AEDM_vs_p_thetaY1002->GetYaxis()->SetTitleFont(42);
   Graph_S0S12S18_AEDM_vs_p_thetaY1002->GetZaxis()->SetLabelFont(42);
   Graph_S0S12S18_AEDM_vs_p_thetaY1002->GetZaxis()->SetTitleOffset(1);
   Graph_S0S12S18_AEDM_vs_p_thetaY1002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0S12S18_AEDM_vs_p_thetaY1002);
   
   gre->Draw("p ");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
