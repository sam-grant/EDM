void S18_Ag2_vs_p_thetaY_trackRecoControl_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec 14 16:33:23 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-166.9784,-1.17854,3410.59,0.5082724);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1133[11] = {
   452.9528,
   656.7601,
   885.1569,
   1123.522,
   1363.641,
   1601.139,
   1825.071,
   2101.94,
   2409.845,
   2636.475,
   2790.432};
   Double_t Graph0_fy1133[11] = {
   -0.1802599,
   0.2185672,
   -0.126554,
   -0.01204462,
   -0.004878554,
   0.0520056,
   0.08893789,
   0.2843621,
   -0.1218865,
   -0.0573098,
   0.02073594};
   Double_t Graph0_fex1133[11] = {
   0.2870025,
   0.2125646,
   0.142451,
   0.1308511,
   0.1511894,
   0.2145765,
   0.4527067,
   2.643443,
   1.048101,
   0.5726681,
   0.5138775};
   Double_t Graph0_fey1133[11] = {
   0.4077016,
   0.1168526,
   0.06026644,
   0.04634732,
   0.04607829,
   0.05767676,
   0.1167865,
   0.4723641,
   0.1881493,
   0.07998469,
   0.133033};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1133,Graph0_fy1133,Graph0_fex1133,Graph0_fey1133);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01133 = new TH1F("Graph_Graph01133","S18_",100,218.8378,3024.773);
   Graph_Graph01133->SetMinimum(-1.009859);
   Graph_Graph01133->SetMaximum(0.3395911);
   Graph_Graph01133->SetDirectory(0);
   Graph_Graph01133->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01133->SetLineColor(ci);
   Graph_Graph01133->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01133->GetXaxis()->SetRange(0,101);
   Graph_Graph01133->GetXaxis()->CenterTitle(true);
   Graph_Graph01133->GetXaxis()->SetLabelFont(42);
   Graph_Graph01133->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01133->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01133->GetXaxis()->SetTitleFont(42);
   Graph_Graph01133->GetYaxis()->SetTitle("A_{g#minus2} [mrad] / 250 MeV");
   Graph_Graph01133->GetYaxis()->CenterTitle(true);
   Graph_Graph01133->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01133->GetYaxis()->SetLabelFont(42);
   Graph_Graph01133->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01133->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01133->GetYaxis()->SetTitleFont(42);
   Graph_Graph01133->GetZaxis()->SetLabelFont(42);
   Graph_Graph01133->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01133->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01133);
   
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
