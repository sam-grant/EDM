void S0S12S18_AEDM_vs_p_thetaY_trackReco_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jan 31 18:52:00 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.9133,-0.4292222,3408.324,0.2726111);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1206[11] = {
   451.6112,
   653.1541,
   880.085,
   1123.204,
   1371.069,
   1620.186,
   1867.124,
   2115.282,
   2363.183,
   2614.691,
   2788.688};
   Double_t Graph0_fy1206[11] = {
   0.00426304,
   0.1697988,
   0.1330373,
   0.1170663,
   0.1542671,
   0.1470943,
   0.1530114,
   0.09384348,
   0.06867912,
   0.07262226,
   0.07077983};
   Double_t Graph0_fex1206[11] = {
   0.1107381,
   0.09418109,
   0.06848963,
   0.06711431,
   0.07174528,
   0.07961856,
   0.09256173,
   0.1151041,
   0.1486707,
   0.1826897,
   0.2225177};
   Double_t Graph0_fey1206[11] = {
   0.1475899,
   0.04973347,
   0.02877186,
   0.02365565,
   0.02178036,
   0.02078451,
   0.02080874,
   0.02189767,
   0.0233405,
   0.02304035,
   0.051383};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1206,Graph0_fy1206,Graph0_fex1206,Graph0_fey1206);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01206 = new TH1F("Graph_Graph01206","S0S12S18_",100,217.7594,3022.651);
   Graph_Graph01206->SetMinimum(-0.3590389);
   Graph_Graph01206->SetMaximum(0.2024277);
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
