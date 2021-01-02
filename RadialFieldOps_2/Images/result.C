void result()
{
//=========Macro generated from canvas: c2/c2
//=========  (Sat Jan  2 15:21:47 2021) by ROOT version 6.22/06
   TCanvas *c2 = new TCanvas("c2", "c2",0,45,800,600);
   c2->Range(-75.01563,-61.36696,75.07813,60.99811);
   c2->SetFillColor(0);
   c2->SetBorderMode(0);
   c2->SetBorderSize(2);
   c2->SetFrameBorderMode(0);
   c2->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1013[6] = {
   -50,
   -30,
   -10,
   10,
   30,
   50};
   Double_t Graph0_fy1013[6] = {
   -38.35878,
   -23.38198,
   -6.130468,
   9.011741,
   20.9615,
   39.12059};
   Double_t Graph0_fex1013[6] = {
   0,
   0,
   0,
   0,
   0.07142857,
   0.0625};
   Double_t Graph0_fey1013[6] = {
   2.614006,
   1.252726,
   1.245178,
   1.413774,
   1.222027,
   1.483337};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1013,Graph0_fy1013,Graph0_fex1013,Graph0_fey1013);
   gre->SetName("Graph0");
   gre->SetTitle(";#LTB_{r}^{App}#GT [ppm];#LTy#GT#upointQHV [mm#upointkV]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01013 = new TH1F("Graph_Graph01013","",100,-60.00625,60.06875);
   Graph_Graph01013->SetMinimum(-49.13045);
   Graph_Graph01013->SetMaximum(48.7616);
   Graph_Graph01013->SetDirectory(0);
   Graph_Graph01013->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01013->SetLineColor(ci);
   Graph_Graph01013->GetXaxis()->SetTitle("#LTB_{r}^{App}#GT [ppm]");
   Graph_Graph01013->GetXaxis()->CenterTitle(true);
   Graph_Graph01013->GetXaxis()->SetLabelFont(42);
   Graph_Graph01013->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01013->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01013->GetXaxis()->SetTitleFont(42);
   Graph_Graph01013->GetYaxis()->SetTitle("#LTy#GT#upointQHV [mm#upointkV]");
   Graph_Graph01013->GetYaxis()->CenterTitle(true);
   Graph_Graph01013->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01013->GetYaxis()->SetLabelFont(42);
   Graph_Graph01013->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01013->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01013->GetYaxis()->SetTitleFont(42);
   Graph_Graph01013->GetZaxis()->SetLabelFont(42);
   Graph_Graph01013->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01013->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01013);
   
   
   TF1 *finalFit1014 = new TF1("finalFit","[0]+[1]*x",-60.00625,60.06875, TF1::EAddToList::kNo);
   finalFit1014->SetFillColor(19);
   finalFit1014->SetFillStyle(0);
   finalFit1014->SetLineColor(2);
   finalFit1014->SetLineWidth(2);
   finalFit1014->SetChisquare(5.365747);
   finalFit1014->SetNDF(4);
   finalFit1014->GetXaxis()->SetLabelFont(42);
   finalFit1014->GetXaxis()->SetTitleOffset(1);
   finalFit1014->GetXaxis()->SetTitleFont(42);
   finalFit1014->GetYaxis()->SetLabelFont(42);
   finalFit1014->GetYaxis()->SetTitleFont(42);
   finalFit1014->SetParameter(0,0.1720239);
   finalFit1014->SetParError(0,0.5800642);
   finalFit1014->SetParLimits(0,0,0);
   finalFit1014->SetParameter(1,0.759055);
   finalFit1014->SetParError(1,0.01918217);
   finalFit1014->SetParLimits(1,0,0);
   finalFit1014->SetParent(gre);
   gre->GetListOfFunctions()->Add(finalFit1014);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("0.759#pm0.0192");
   pt_LaTex = pt->AddText("0.172#pm 0.58");
   pt_LaTex = pt->AddText("0.227#pm0.765");
   pt->Draw();
   
   pt = new TPaveText(0.11,0.68,0.33,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   pt_LaTex = pt->AddText("Gradient");
   pt_LaTex = pt->AddText("Y-intercept [mm#upointkV]");
   pt_LaTex = pt->AddText("#LTB_{r}^{Bkg}#GT [ppm]");
   pt->Draw();
   TLine *line = new TLine(-60.00625,0,-0.226629,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-0.226629,-49.13045,-0.226629,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   c2->Modified();
   c2->cd();
   c2->SetSelected(c2);
}
