void result()
{
//=========Macro generated from canvas: c2/c2
//=========  (Wed Dec  9 16:25:07 2020) by ROOT version 6.22/02
   TCanvas *c2 = new TCanvas("c2", "c2",1120,480,800,600);
   c2->Range(-45,-28.363,45,53.94427);
   c2->SetFillColor(0);
   c2->SetBorderMode(0);
   c2->SetBorderSize(2);
   c2->SetFrameBorderMode(0);
   c2->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1005[2] = {
   30,
   -30};
   Double_t Graph0_fy1005[2] = {
   38.7387,
   -13.0851};
   Double_t Graph0_fex1005[2] = {
   0,
   0};
   Double_t Graph0_fey1005[2] = {
   1.487695,
   1.560017};
   TGraphErrors *gre = new TGraphErrors(2,Graph0_fx1005,Graph0_fy1005,Graph0_fex1005,Graph0_fey1005);
   gre->SetName("Graph0");
   gre->SetTitle(";#LTB_{r}^{App}#GT [ppm];#LTy#GT#upointQHV [mm#upointkV]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01005 = new TH1F("Graph_Graph01005","",100,-36,36);
   Graph_Graph01005->SetMinimum(-20.13227);
   Graph_Graph01005->SetMaximum(45.71355);
   Graph_Graph01005->SetDirectory(0);
   Graph_Graph01005->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01005->SetLineColor(ci);
   Graph_Graph01005->GetXaxis()->SetTitle("#LTB_{r}^{App}#GT [ppm]");
   Graph_Graph01005->GetXaxis()->CenterTitle(true);
   Graph_Graph01005->GetXaxis()->SetLabelFont(42);
   Graph_Graph01005->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01005->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01005->GetXaxis()->SetTitleFont(42);
   Graph_Graph01005->GetYaxis()->SetTitle("#LTy#GT#upointQHV [mm#upointkV]");
   Graph_Graph01005->GetYaxis()->CenterTitle(true);
   Graph_Graph01005->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01005->GetYaxis()->SetLabelFont(42);
   Graph_Graph01005->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01005->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01005->GetYaxis()->SetTitleFont(42);
   Graph_Graph01005->GetZaxis()->SetLabelFont(42);
   Graph_Graph01005->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01005);
   
   
   TF1 *finalFit1006 = new TF1("finalFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   finalFit1006->SetFillColor(19);
   finalFit1006->SetFillStyle(0);
   finalFit1006->SetLineColor(2);
   finalFit1006->SetLineWidth(2);
   finalFit1006->SetChisquare(4.978096e-07);
   finalFit1006->SetNDF(0);
   finalFit1006->GetXaxis()->SetLabelFont(42);
   finalFit1006->GetXaxis()->SetTitleOffset(1);
   finalFit1006->GetXaxis()->SetTitleFont(42);
   finalFit1006->GetYaxis()->SetLabelFont(42);
   finalFit1006->GetYaxis()->SetTitleFont(42);
   finalFit1006->SetParameter(0,12.82718);
   finalFit1006->SetParError(0,1.077832);
   finalFit1006->SetParLimits(0,0,0);
   finalFit1006->SetParameter(1,0.8637074);
   finalFit1006->SetParError(1,0.03592774);
   finalFit1006->SetParLimits(1,0,0);
   finalFit1006->SetParent(gre);
   gre->GetListOfFunctions()->Add(finalFit1006);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("0.864#pm0.0359");
   pt_LaTex = pt->AddText(" 12.8#pm 1.08");
   pt_LaTex = pt->AddText(" 14.9#pm 1.42");
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
   TLine *line = new TLine(-36,0,-14.8513,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-14.8513,-20.13227,-14.8513,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   c2->Modified();
   c2->cd();
   c2->SetSelected(c2);
}
