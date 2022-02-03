void S0S12S18_c_vs_p_A_trackReco_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jan 31 18:52:00 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.9133,-9.097082e-06,3408.324,7.159694e-05);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1208[11] = {
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
   Double_t Graph0_fy1208[11] = {
   1.410541e-05,
   -8.348939e-08,
   -1.587272e-08,
   -5.650005e-08,
   -4.947986e-08,
   -3.153969e-08,
   -2.584377e-08,
   1.338365e-07,
   -2.372041e-07,
   -1.304505e-06,
   7.388961e-07};
   Double_t Graph0_fex1208[11] = {
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
   Double_t Graph0_fey1208[11] = {
   1.118366e-06,
   7.517509e-08,
   2.565449e-08,
   2.347865e-08,
   2.878572e-08,
   4.008695e-08,
   6.604105e-08,
   1.367718e-07,
   3.300845e-07,
   7.490471e-07,
   1.857278e-05};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1208,Graph0_fy1208,Graph0_fex1208,Graph0_fey1208);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01208 = new TH1F("Graph_Graph01208","S0S12S18_",100,217.7594,3022.651);
   Graph_Graph01208->SetMinimum(-1.02768e-06);
   Graph_Graph01208->SetMaximum(6.352753e-05);
   Graph_Graph01208->SetDirectory(0);
   Graph_Graph01208->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01208->SetLineColor(ci);
   Graph_Graph01208->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01208->GetXaxis()->SetRange(0,101);
   Graph_Graph01208->GetXaxis()->CenterTitle(true);
   Graph_Graph01208->GetXaxis()->SetLabelFont(42);
   Graph_Graph01208->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01208->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01208->GetXaxis()->SetTitleFont(42);
   Graph_Graph01208->GetYaxis()->SetTitle("c / 250 MeV");
   Graph_Graph01208->GetYaxis()->CenterTitle(true);
   Graph_Graph01208->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01208->GetYaxis()->SetLabelFont(42);
   Graph_Graph01208->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01208->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01208->GetYaxis()->SetTitleFont(42);
   Graph_Graph01208->GetZaxis()->SetLabelFont(42);
   Graph_Graph01208->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01208->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01208);
   
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
