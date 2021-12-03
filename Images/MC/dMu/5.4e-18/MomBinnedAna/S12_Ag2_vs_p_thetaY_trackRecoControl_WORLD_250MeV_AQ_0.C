void S12_Ag2_vs_p_thetaY_trackRecoControl_WORLD_250MeV_AQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 15:33:10 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(486.542,-0.02994646,3035.096,0.1208684);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1052[12] = {
   191.6982,
   422.9652,
   631.332,
   875.8592,
   1123.683,
   1372.848,
   1621.799,
   1870.495,
   2118.904,
   2366.462,
   2613.11,
   2825.561};
   Double_t Graph0_fy1052[12] = {
   -1.090117,
   -0.102534,
   -0.02741796,
   0.08833217,
   0.07777312,
   0.04398539,
   0.05364762,
   0.07506291,
   0.02668293,
   0.03872385,
   0.08172084,
   0.03975414};
   Double_t Graph0_fex1052[12] = {
   0.3423532,
   0.0824024,
   0.06338008,
   0.05944847,
   0.06042233,
   0.06274835,
   0.06651575,
   0.07252857,
   0.0827999,
   0.09819266,
   0.124545,
   0.1582636};
   Double_t Graph0_fey1052[12] = {
   0.7335026,
   0.09338255,
   0.04361046,
   0.03162728,
   0.0264193,
   0.02323642,
   0.02134138,
   0.02085908,
   0.021171,
   0.02244971,
   0.02577105,
   0.04502283};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1052,Graph0_fy1052,Graph0_fex1052,Graph0_fey1052);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01052 = new TH1F("Graph_Graph01052","S12_",100,0,3089.156);
   Graph_Graph01052->SetMinimum(-0.01486498);
   Graph_Graph01052->SetMaximum(0.1057869);
   Graph_Graph01052->SetDirectory(0);
   Graph_Graph01052->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01052->SetLineColor(ci);
   Graph_Graph01052->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01052->GetXaxis()->SetRange(25,90);
   Graph_Graph01052->GetXaxis()->CenterTitle(true);
   Graph_Graph01052->GetXaxis()->SetLabelFont(42);
   Graph_Graph01052->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01052->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01052->GetXaxis()->SetTitleFont(42);
   Graph_Graph01052->GetYaxis()->SetTitle("A_{g#minus2} [mrad] / 250 MeV");
   Graph_Graph01052->GetYaxis()->CenterTitle(true);
   Graph_Graph01052->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01052->GetYaxis()->SetLabelFont(42);
   Graph_Graph01052->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01052->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01052->GetYaxis()->SetTitleFont(42);
   Graph_Graph01052->GetZaxis()->SetLabelFont(42);
   Graph_Graph01052->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01052->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01052);
   
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
