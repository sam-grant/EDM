void S0S12S18_eAEDM_vs_p_thetaY_trackReco_WORLD_250MeV_BQ.4_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Feb  2 11:36:13 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.4033,-0.02877139,3407.53,0.3651985);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1215[11] = {
   451.8566,
   653.3028,
   880.3056,
   1123.079,
   1371.077,
   1620.197,
   1866.984,
   2115.419,
   2362.991,
   2613.824,
   2788.2};
   Double_t Graph0_fy1215[11] = {
   0.09621914,
   0.03223528,
   0.01851651,
   0.01521174,
   0.01394871,
   0.01328147,
   0.01332575,
   0.01398715,
   0.01493342,
   0.01479192,
   0.03367027};
   Double_t Graph0_fex1215[11] = {
   0.07208923,
   0.06091129,
   0.04412931,
   0.04310084,
   0.0460258,
   0.05089799,
   0.0593305,
   0.0737244,
   0.09523859,
   0.1166572,
   0.1421294};
   Double_t Graph0_fey1215[11] = {
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
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1215,Graph0_fy1215,Graph0_fex1215,Graph0_fey1215);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01215 = new TH1F("Graph_Graph01215","S0S12S18_",100,218.1288,3021.998);
   Graph_Graph01215->SetMinimum(0.01062559);
   Graph_Graph01215->SetMaximum(0.3258015);
   Graph_Graph01215->SetDirectory(0);
   Graph_Graph01215->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01215->SetLineColor(ci);
   Graph_Graph01215->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01215->GetXaxis()->SetRange(0,101);
   Graph_Graph01215->GetXaxis()->CenterTitle(true);
   Graph_Graph01215->GetXaxis()->SetLabelFont(42);
   Graph_Graph01215->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01215->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01215->GetXaxis()->SetTitleFont(42);
   Graph_Graph01215->GetYaxis()->SetTitle("#deltaA_{EDM} [mrad] / 250 MeV");
   Graph_Graph01215->GetYaxis()->CenterTitle(true);
   Graph_Graph01215->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01215->GetYaxis()->SetLabelFont(42);
   Graph_Graph01215->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01215->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01215->GetYaxis()->SetTitleFont(42);
   Graph_Graph01215->GetZaxis()->SetLabelFont(42);
   Graph_Graph01215->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01215->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01215);
   
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
