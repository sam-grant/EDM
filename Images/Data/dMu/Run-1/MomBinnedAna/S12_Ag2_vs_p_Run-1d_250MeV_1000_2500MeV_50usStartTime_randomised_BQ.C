void S12_Ag2_vs_p_Run-1d_250MeV_1000_2500MeV_50usStartTime_randomised_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun 12 21:17:56 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(784.8151,-0.0314802,2703.684,0.06564122);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1041[11] = {
   455.7948,
   655.3566,
   884.0752,
   1127.329,
   1373.547,
   1620.212,
   1866.856,
   2116.19,
   2359.593,
   2608.184,
   2781.407};
   Double_t Graph0_fy1041[11] = {
   0.007199502,
   0.03145606,
   0.04874871,
   0.01604248,
   0.02033211,
   0.009689756,
   -0.01346858,
   -0.004113524,
   -0.02723031,
   -0.0148555,
   -0.02236138};
   Double_t Graph0_fex1041[11] = {
   0.09476063,
   0.06687104,
   0.04432606,
   0.04039739,
   0.03969655,
   0.04383452,
   0.05300105,
   0.06654486,
   0.08690146,
   0.1219654,
   0.1944222};
   Double_t Graph0_fey1041[11] = {
   0.1339798,
   0.0341153,
   0.01728919,
   0.01319832,
   0.01147257,
   0.0110114,
   0.01130247,
   0.01204027,
   0.01343068,
   0.01603013,
   0.05832792};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1041,Graph0_fy1041,Graph0_fex1041,Graph0_fey1041);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01041 = new TH1F("Graph_Graph01041","S12",100,223.1099,3014.192);
   Graph_Graph01041->SetMinimum(-0.02176805);
   Graph_Graph01041->SetMaximum(0.05592908);
   Graph_Graph01041->SetDirectory(0);
   Graph_Graph01041->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01041->SetLineColor(ci);
   Graph_Graph01041->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01041->GetXaxis()->SetRange(28,82);
   Graph_Graph01041->GetXaxis()->CenterTitle(true);
   Graph_Graph01041->GetXaxis()->SetLabelFont(42);
   Graph_Graph01041->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01041->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01041->GetXaxis()->SetTitleFont(42);
   Graph_Graph01041->GetYaxis()->SetTitle("A_{g#minus2} [mrad] / 250 MeV");
   Graph_Graph01041->GetYaxis()->CenterTitle(true);
   Graph_Graph01041->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01041->GetYaxis()->SetLabelFont(42);
   Graph_Graph01041->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01041->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01041->GetYaxis()->SetTitleFont(42);
   Graph_Graph01041->GetZaxis()->SetLabelFont(42);
   Graph_Graph01041->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01041->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01041);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
