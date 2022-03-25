void S12_Ag2_vs_p_thetaY_trackReco_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 02:59:07 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-163.9079,-0.1539768,3375.532,0.4816085);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1096[11] = {
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
   Double_t Graph0_fy1096[11] = {
   0.2561985,
   0.07655808,
   -0.01804452,
   -0.00658027,
   -0.01563437,
   -0.01491117,
   0.01516789,
   0.01788408,
   0.009349891,
   0.02504192,
   0.001463689};
   Double_t Graph0_fex1096[11] = {
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
   Double_t Graph0_fey1096[11] = {
   0.1194791,
   0.04019102,
   0.02304208,
   0.01892637,
   0.01729732,
   0.0165105,
   0.01667858,
   0.01787662,
   0.01979871,
   0.02059971,
   0.04950963};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1096,Graph0_fy1096,Graph0_fex1096,Graph0_fey1096);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01096 = new TH1F("Graph_Graph01096","S12_",100,218.0713,3021.588);
   Graph_Graph01096->SetMinimum(-0.0904183);
   Graph_Graph01096->SetMaximum(0.41805);
   Graph_Graph01096->SetDirectory(0);
   Graph_Graph01096->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01096->SetLineColor(ci);
   Graph_Graph01096->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01096->GetXaxis()->SetRange(0,100);
   Graph_Graph01096->GetXaxis()->CenterTitle(true);
   Graph_Graph01096->GetXaxis()->SetLabelFont(42);
   Graph_Graph01096->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01096->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01096->GetXaxis()->SetTitleFont(42);
   Graph_Graph01096->GetYaxis()->SetTitle("A_{g#minus2} [mrad] / 250 MeV");
   Graph_Graph01096->GetYaxis()->CenterTitle(true);
   Graph_Graph01096->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01096->GetYaxis()->SetLabelFont(42);
   Graph_Graph01096->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01096->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01096->GetYaxis()->SetTitleFont(42);
   Graph_Graph01096->GetZaxis()->SetLabelFont(42);
   Graph_Graph01096->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01096->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01096);
   
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
