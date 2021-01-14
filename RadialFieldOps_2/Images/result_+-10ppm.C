void result_+-10ppm()
{
//=========Macro generated from canvas: c2/c2
//=========  (Tue Jan  5 12:34:51 2021) by ROOT version 6.22/06
   TCanvas *c2 = new TCanvas("c2", "c2",1120,480,800,600);
   c2->Range(-15,-11.82594,15,14.87581);
   c2->SetFillColor(0);
   c2->SetBorderMode(0);
   c2->SetBorderSize(2);
   c2->SetFrameBorderMode(0);
   c2->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1013[2] = {
   -10,
   10};
   Double_t Graph0_fy1013[2] = {
   -6.130468,
   9.011741};
   Double_t Graph0_fex1013[2] = {
   0,
   0};
   Double_t Graph0_fey1013[2] = {
   1.245178,
   1.413774};
   TGraphErrors *gre = new TGraphErrors(2,Graph0_fx1013,Graph0_fy1013,Graph0_fex1013,Graph0_fey1013);
   gre->SetName("Graph0");
   gre->SetTitle(";#LTB_{r}^{App}#GT [ppm];#LTy#GT#upointQHV [mm#upointkV]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01013 = new TH1F("Graph_Graph01013","",100,-12,12);
   Graph_Graph01013->SetMinimum(-9.155762);
   Graph_Graph01013->SetMaximum(12.20563);
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
   
   
   TF1 *finalFit1014 = new TF1("finalFit","[0]+[1]*x",-12,12, TF1::EAddToList::kNo);
   finalFit1014->SetFillColor(19);
   finalFit1014->SetFillStyle(0);
   finalFit1014->SetLineColor(2);
   finalFit1014->SetLineWidth(2);
   finalFit1014->SetChisquare(3.006527e-07);
   finalFit1014->SetNDF(0);
   finalFit1014->GetXaxis()->SetLabelFont(42);
   finalFit1014->GetXaxis()->SetTitleOffset(1);
   finalFit1014->GetXaxis()->SetTitleFont(42);
   finalFit1014->GetYaxis()->SetLabelFont(42);
   finalFit1014->GetYaxis()->SetTitleFont(42);
   finalFit1014->SetParameter(0,1.441152);
   finalFit1014->SetParError(0,0.9419694);
   finalFit1014->SetParLimits(0,0,0);
   finalFit1014->SetParameter(1,0.7571136);
   finalFit1014->SetParError(1,0.09419694);
   finalFit1014->SetParLimits(1,0,0);
   finalFit1014->SetParent(gre);
   gre->GetListOfFunctions()->Add(finalFit1014);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("0.757#pm0.0942");
   pt_LaTex = pt->AddText(" 1.44#pm0.942");
   pt_LaTex = pt->AddText("  1.9#pm 1.24");
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
   TLine *line = new TLine(-12,0,-1.903482,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-1.903482,-9.155762,-1.903482,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   c2->Modified();
   c2->cd();
   c2->SetSelected(c2);
}
