void S0S12S18_eAEDM_vs_p_thetaY_trackReco_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jan 31 18:52:00 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.9133,-0.04360586,3408.324,0.5587348);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1215[11] = {
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
   Double_t Graph0_fy1215[11] = {
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
   Double_t Graph0_fex1215[11] = {
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
   
   TH1F *Graph_Graph01215 = new TH1F("Graph_Graph01215","S0S12S18_",100,217.7594,3022.651);
   Graph_Graph01215->SetMinimum(0.0166282);
   Graph_Graph01215->SetMaximum(0.4985007);
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
