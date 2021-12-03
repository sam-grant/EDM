void S12S18_Ag2_vs_p_thetaY_trackRecoControl_WORLD_250MeV_AQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 15:27:31 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(486.458,-0.005790617,3034.571,0.1216817);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1082[12] = {
   191.2492,
   423.0726,
   631.3751,
   875.8727,
   1123.701,
   1372.838,
   1621.917,
   1870.444,
   2118.783,
   2366.347,
   2612.986,
   2825.089};
   Double_t Graph0_fy1082[12] = {
   -1.006821,
   -0.09003085,
   0.004530582,
   0.05920893,
   0.09125725,
   0.04684036,
   0.05489701,
   0.04688034,
   0.04259783,
   0.05375191,
   0.06022532,
   0.06899448};
   Double_t Graph0_fex1082[12] = {
   0.2451076,
   0.05852805,
   0.04492808,
   0.04216635,
   0.04284521,
   0.0445378,
   0.04722669,
   0.05151899,
   0.05884351,
   0.06982903,
   0.08868849,
   0.1128886};
   Double_t Graph0_fey1082[12] = {
   0.5166613,
   0.06618436,
   0.03089878,
   0.02240469,
   0.01872521,
   0.01647809,
   0.01515724,
   0.01479486,
   0.01504973,
   0.01592585,
   0.01835355,
   0.03211113};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1082,Graph0_fy1082,Graph0_fex1082,Graph0_fey1082);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01082 = new TH1F("Graph_Graph01082","S12S18_",100,0,3088.622);
   Graph_Graph01082->SetMinimum(0.006956612);
   Graph_Graph01082->SetMaximum(0.1089344);
   Graph_Graph01082->SetDirectory(0);
   Graph_Graph01082->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01082->SetLineColor(ci);
   Graph_Graph01082->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01082->GetXaxis()->SetRange(25,90);
   Graph_Graph01082->GetXaxis()->CenterTitle(true);
   Graph_Graph01082->GetXaxis()->SetLabelFont(42);
   Graph_Graph01082->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01082->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01082->GetXaxis()->SetTitleFont(42);
   Graph_Graph01082->GetYaxis()->SetTitle("A_{g#minus2} [mrad] / 250 MeV");
   Graph_Graph01082->GetYaxis()->CenterTitle(true);
   Graph_Graph01082->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01082->GetYaxis()->SetLabelFont(42);
   Graph_Graph01082->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01082->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01082->GetYaxis()->SetTitleFont(42);
   Graph_Graph01082->GetZaxis()->SetLabelFont(42);
   Graph_Graph01082->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01082->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01082);
   
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
