void S12S18_Ag2_vs_p_thetaY_trackReco_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jun  7 11:37:24 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-163.6875,-0.1489148,3375.235,0.4351068);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1170[11] = {
   451.8963,
   653.3497,
   880.4168,
   1123.105,
   1371.026,
   1619.994,
   1866.738,
   2115.059,
   2362.927,
   2613.265,
   2787.611};
   Double_t Graph0_fy1170[11] = {
   0.2470106,
   0.07101366,
   -0.03414297,
   -0.004850553,
   -0.0006824514,
   -0.001121987,
   0.01797656,
   0.008516848,
   0.01693433,
   0.02983388,
   0.002927669};
   Double_t Graph0_fex1170[11] = {
   0.06811951,
   0.05748166,
   0.04155252,
   0.0405763,
   0.04336583,
   0.04797142,
   0.05629496,
   0.07062218,
   0.0925011,
   0.1122526,
   0.1394332};
   Double_t Graph0_fey1170[11] = {
   0.09075926,
   0.03044511,
   0.01743487,
   0.01430695,
   0.01312389,
   0.01256921,
   0.01274517,
   0.01367999,
   0.0151757,
   0.01568101,
   0.03871644};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1170,Graph0_fy1170,Graph0_fex1170,Graph0_fey1170);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01170 = new TH1F("Graph_Graph01170","S12S18_",100,218.2359,3021.343);
   Graph_Graph01170->SetMinimum(-0.09051261);
   Graph_Graph01170->SetMaximum(0.3767047);
   Graph_Graph01170->SetDirectory(0);
   Graph_Graph01170->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01170->SetLineColor(ci);
   Graph_Graph01170->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01170->GetXaxis()->SetRange(0,100);
   Graph_Graph01170->GetXaxis()->CenterTitle(true);
   Graph_Graph01170->GetXaxis()->SetLabelFont(42);
   Graph_Graph01170->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01170->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01170->GetXaxis()->SetTitleFont(42);
   Graph_Graph01170->GetYaxis()->SetTitle("A_{g#minus2} [mrad] / 250 MeV");
   Graph_Graph01170->GetYaxis()->CenterTitle(true);
   Graph_Graph01170->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01170->GetYaxis()->SetLabelFont(42);
   Graph_Graph01170->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01170->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01170->GetYaxis()->SetTitleFont(42);
   Graph_Graph01170->GetZaxis()->SetLabelFont(42);
   Graph_Graph01170->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01170->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01170);
   
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
