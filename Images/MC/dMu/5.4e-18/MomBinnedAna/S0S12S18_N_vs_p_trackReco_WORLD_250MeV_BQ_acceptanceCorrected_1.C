void S0S12S18_N_vs_p_trackReco_WORLD_250MeV_BQ_acceptanceCorrected_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Feb 22 00:12:27 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.3944,-3219372,3407.426,4534701);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1214[11] = {
   451.842,
   653.3036,
   880.3415,
   1123.074,
   1371.07,
   1620.188,
   1866.988,
   2115.41,
   2363.041,
   2613.745,
   2788.124};
   Double_t Graph0_fy1214[11] = {
   235427,
   1436651,
   2953885,
   3135039,
   2747613,
   2238450,
   1640879,
   1062237,
   632474,
   399074,
   48446};
   Double_t Graph0_fex1214[11] = {
   0.06806441,
   0.05746335,
   0.04161396,
   0.0406491,
   0.04340141,
   0.04801001,
   0.05599992,
   0.06963612,
   0.0900807,
   0.1102818,
   0.1342324};
   Double_t Graph0_fey1214[11] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1214,Graph0_fy1214,Graph0_fex1214,Graph0_fey1214);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01214 = new TH1F("Graph_Graph01214","S0S12S18_",100,218.1255,3021.906);
   Graph_Graph01214->SetMinimum(-2443964);
   Graph_Graph01214->SetMaximum(3759294);
   Graph_Graph01214->SetDirectory(0);
   Graph_Graph01214->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01214->SetLineColor(ci);
   Graph_Graph01214->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01214->GetXaxis()->SetRange(0,101);
   Graph_Graph01214->GetXaxis()->CenterTitle(true);
   Graph_Graph01214->GetXaxis()->SetLabelFont(42);
   Graph_Graph01214->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01214->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01214->GetXaxis()->SetTitleFont(42);
   Graph_Graph01214->GetYaxis()->SetTitle("Positrons / 250 MeV");
   Graph_Graph01214->GetYaxis()->CenterTitle(true);
   Graph_Graph01214->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01214->GetYaxis()->SetLabelFont(42);
   Graph_Graph01214->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01214->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01214->GetYaxis()->SetTitleFont(42);
   Graph_Graph01214->GetZaxis()->SetLabelFont(42);
   Graph_Graph01214->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01214->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01214);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.3920101,0.9362587,0.6079899,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
