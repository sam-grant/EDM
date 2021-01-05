void result()
{
//=========Macro generated from canvas: c2/c2
//=========  (Sun Jan  3 12:08:33 2021) by ROOT version 6.22/06
   TCanvas *c2 = new TCanvas("c2", "c2",0,0,800,600);
   c2->Range(-50.01786,-40.94437,70.08929,56.91359);
   c2->SetFillColor(0);
   c2->SetBorderMode(0);
   c2->SetBorderSize(2);
   c2->SetFrameBorderMode(0);
   c2->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1013[5] = {
   -30,
   -10,
   10,
   30,
   50};
   Double_t Graph0_fy1013[5] = {
   -23.38198,
   -6.130468,
   9.011741,
   20.9615,
   39.12059};
   Double_t Graph0_fex1013[5] = {
   0,
   0,
   0,
   0,
   0.07142857};
   Double_t Graph0_fey1013[5] = {
   1.252726,
   1.245178,
   1.413774,
   1.222027,
   1.483337};
   TGraphErrors *gre = new TGraphErrors(5,Graph0_fx1013,Graph0_fy1013,Graph0_fex1013,Graph0_fey1013);
   gre->SetName("Graph0");
   gre->SetTitle(";#LTB_{r}^{App}#GT [ppm];#LTy#GT#upointQHV [mm#upointkV]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01013 = new TH1F("Graph_Graph01013","",100,-38.00714,58.07857);
   Graph_Graph01013->SetMinimum(-31.15857);
   Graph_Graph01013->SetMaximum(47.12779);
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
   
   
   TF1 *finalFit1014 = new TF1("finalFit","[0]+[1]*x",-38.00714,58.07857, TF1::EAddToList::kNo);
   finalFit1014->SetFillColor(19);
   finalFit1014->SetFillStyle(0);
   finalFit1014->SetLineColor(2);
   finalFit1014->SetLineWidth(2);
   finalFit1014->SetChisquare(5.308716);
   finalFit1014->SetNDF(3);
   finalFit1014->GetXaxis()->SetLabelFont(42);
   finalFit1014->GetXaxis()->SetTitleOffset(1);
   finalFit1014->GetXaxis()->SetTitleFont(42);
   finalFit1014->GetYaxis()->SetLabelFont(42);
   finalFit1014->GetYaxis()->SetTitleFont(42);
   finalFit1014->SetParameter(0,0.2170136);
   finalFit1014->SetParError(0,0.6083071);
   finalFit1014->SetParLimits(0,0,0);
   finalFit1014->SetParameter(1,0.7568676);
   finalFit1014->SetParError(1,0.02105546);
   finalFit1014->SetParLimits(1,0,0);
   finalFit1014->SetParent(gre);
   gre->GetListOfFunctions()->Add(finalFit1014);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("0.757#pm0.0211");
   pt_LaTex = pt->AddText("0.217#pm0.608");
   pt_LaTex = pt->AddText("0.287#pm0.806");
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
   TLine *line = new TLine(-38.00714,0,-0.2867259,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-0.2867259,-31.15857,-0.2867259,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   c2->Modified();
   c2->cd();
   c2->SetSelected(c2);
}
