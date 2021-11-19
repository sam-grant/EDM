void S18_c_vs_p_thetaY_trackReco_AAR_250MeV_AQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Nov 19 17:33:08 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-336.1523,-3.146419,3334.476,0.8004913);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1063[12] = {
   172.9297,
   432.8647,
   628.4978,
   873.0147,
   1121.804,
   1371.324,
   1620.193,
   1868.223,
   2115.655,
   2363.493,
   2614.65,
   2825.258};
   Double_t Graph0_fy1063[12] = {
   -0.9090218,
   -2.403006,
   -0.838365,
   -0.3759751,
   -0.2890685,
   -0.2082234,
   -0.1378141,
   -0.1252047,
   -0.1726003,
   -0.08396938,
   -0.07672061,
   -0.06303593};
   Double_t Graph0_fex1063[12] = {
   1.275515,
   0.1209802,
   0.1087106,
   0.1092648,
   0.1173546,
   0.1272627,
   0.1404312,
   0.1620366,
   0.195341,
   0.2531342,
   0.3251753,
   0.397035};
   Double_t Graph0_fey1063[12] = {
   1.051695,
   0.08559465,
   0.04253991,
   0.03484159,
   0.03144827,
   0.02909984,
   0.02760497,
   0.02744004,
   0.02867396,
   0.0317856,
   0.03301545,
   0.04293685};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1063,Graph0_fy1063,Graph0_fex1063,Graph0_fey1063);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01063 = new TH1F("Graph_Graph01063","S18_",100,0,3091.056);
   Graph_Graph01063->SetMinimum(-2.751728);
   Graph_Graph01063->SetMaximum(0.4058003);
   Graph_Graph01063->SetDirectory(0);
   Graph_Graph01063->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01063->SetLineColor(ci);
   Graph_Graph01063->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01063->GetXaxis()->SetRange(2,96);
   Graph_Graph01063->GetXaxis()->CenterTitle(true);
   Graph_Graph01063->GetXaxis()->SetLabelFont(42);
   Graph_Graph01063->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01063->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01063->GetXaxis()->SetTitleFont(42);
   Graph_Graph01063->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01063->GetYaxis()->CenterTitle(true);
   Graph_Graph01063->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01063->GetYaxis()->SetLabelFont(42);
   Graph_Graph01063->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01063->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01063->GetYaxis()->SetTitleFont(42);
   Graph_Graph01063->GetZaxis()->SetLabelFont(42);
   Graph_Graph01063->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01063->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01063);
   
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
