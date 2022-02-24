void S0S12S18_AEDM_vs_p_thetaY_trackReco_WORLD_250MeV_BQ_acceptanceCorrected_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Feb 22 00:12:26 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.3944,-0.9252325,3407.426,0.3919591);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1206[11] = {
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
   Double_t Graph0_fy1206[11] = {
   -0.1766993,
   0.1209041,
   0.1300042,
   0.1629201,
   0.2094085,
   0.2168723,
   0.1691857,
   0.133109,
   0.09020022,
   0.1012,
   -0.005881931};
   Double_t Graph0_fex1206[11] = {
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
   Double_t Graph0_fey1206[11] = {
   0.1271298,
   0.0453308,
   0.02721365,
   0.02233712,
   0.01952108,
   0.01692436,
   0.01560576,
   0.0153514,
   0.01558738,
   0.0148395,
   0.03307429};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1206,Graph0_fy1206,Graph0_fex1206,Graph0_fey1206);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01206 = new TH1F("Graph_Graph01206","S0S12S18_",100,218.1255,3021.906);
   Graph_Graph01206->SetMinimum(-0.7935134);
   Graph_Graph01206->SetMaximum(0.2602399);
   Graph_Graph01206->SetDirectory(0);
   Graph_Graph01206->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01206->SetLineColor(ci);
   Graph_Graph01206->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01206->GetXaxis()->SetRange(0,101);
   Graph_Graph01206->GetXaxis()->CenterTitle(true);
   Graph_Graph01206->GetXaxis()->SetLabelFont(42);
   Graph_Graph01206->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01206->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01206->GetXaxis()->SetTitleFont(42);
   Graph_Graph01206->GetYaxis()->SetTitle("A_{EDM} [mrad] / 250 MeV");
   Graph_Graph01206->GetYaxis()->CenterTitle(true);
   Graph_Graph01206->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01206->GetYaxis()->SetLabelFont(42);
   Graph_Graph01206->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01206->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01206->GetYaxis()->SetTitleFont(42);
   Graph_Graph01206->GetZaxis()->SetLabelFont(42);
   Graph_Graph01206->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01206->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01206);
   
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
