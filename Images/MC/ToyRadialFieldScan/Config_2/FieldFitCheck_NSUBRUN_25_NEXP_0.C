void FieldFitCheck_NSUBRUN_25_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:49:22 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-40.59283,45,56.40036);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1011[4] = {
   -30,
   -10,
   10,
   30};
   Double_t Graph0_fy1011[4] = {
   -21.6836,
   -2.352893,
   20.79246,
   37.49113};
   Double_t Graph0_fex1011[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1011[4] = {
   2.743692,
   2.743692,
   2.743692,
   2.743692};
   TGraphErrors *gre = new TGraphErrors(4,Graph0_fx1011,Graph0_fy1011,Graph0_fex1011,Graph0_fey1011);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 25");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01011 = new TH1F("Graph_Graph01011","Sub-runs 25",100,-36,36);
   Graph_Graph01011->SetMinimum(-30.89351);
   Graph_Graph01011->SetMaximum(46.70104);
   Graph_Graph01011->SetDirectory(0);
   Graph_Graph01011->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01011->SetLineColor(ci);
   Graph_Graph01011->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01011->GetXaxis()->CenterTitle(true);
   Graph_Graph01011->GetXaxis()->SetLabelFont(42);
   Graph_Graph01011->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01011->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01011->GetXaxis()->SetTitleFont(42);
   Graph_Graph01011->GetYaxis()->SetTitle("Calculated B_{r} [ppm]");
   Graph_Graph01011->GetYaxis()->CenterTitle(true);
   Graph_Graph01011->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01011->GetYaxis()->SetLabelFont(42);
   Graph_Graph01011->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01011->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01011->GetYaxis()->SetTitleFont(42);
   Graph_Graph01011->GetZaxis()->SetLabelFont(42);
   Graph_Graph01011->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01011);
   
   
   TF1 *checkFit1012 = new TF1("checkFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   checkFit1012->SetFillColor(19);
   checkFit1012->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1012->SetLineColor(ci);
   checkFit1012->SetLineWidth(2);
   checkFit1012->SetChisquare(0.9294324);
   checkFit1012->SetNDF(2);
   checkFit1012->GetXaxis()->SetLabelFont(42);
   checkFit1012->GetXaxis()->SetTitleOffset(1);
   checkFit1012->GetXaxis()->SetTitleFont(42);
   checkFit1012->GetYaxis()->SetLabelFont(42);
   checkFit1012->GetYaxis()->SetTitleFont(42);
   checkFit1012->SetParameter(0,8.561773);
   checkFit1012->SetParError(0,1.371846);
   checkFit1012->SetParLimits(0,0,0);
   checkFit1012->SetParameter(1,1.003348);
   checkFit1012->SetParError(1,0.06135082);
   checkFit1012->SetParLimits(1,0,0);
   checkFit1012->SetParent(gre);
   gre->GetListOfFunctions()->Add(checkFit1012);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("0.465");
   pt_LaTex = pt->AddText("    1#pm0.0614");
   pt_LaTex = pt->AddText(" 8.56#pm 1.37");
   pt_LaTex = pt->AddText("#minus8.53#pm 1.46");
   pt->Draw();
   
   pt = new TPaveText(0.3,0.69,0.62,0.88,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   pt_LaTex = pt->AddText("#chi^{2}/ndf");
   pt_LaTex = pt->AddText("Gradient [mm/kV#upointppm]");
   pt_LaTex = pt->AddText("Y-intercept [mm/kV]");
   pt_LaTex = pt->AddText("Background B_{r} [ppm]");
   pt->Draw();
   TLine *line = new TLine(-36,0,-8.533205,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-8.533205,-30.89351,-8.533205,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *checkFit1013 = new TF1("checkFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   checkFit1013->SetFillColor(19);
   checkFit1013->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1013->SetLineColor(ci);
   checkFit1013->SetLineWidth(2);
   checkFit1013->SetChisquare(0.9294324);
   checkFit1013->SetNDF(2);
   checkFit1013->GetXaxis()->SetLabelFont(42);
   checkFit1013->GetXaxis()->SetTitleOffset(1);
   checkFit1013->GetXaxis()->SetTitleFont(42);
   checkFit1013->GetYaxis()->SetLabelFont(42);
   checkFit1013->GetYaxis()->SetTitleFont(42);
   checkFit1013->SetParameter(0,8.561773);
   checkFit1013->SetParError(0,1.371846);
   checkFit1013->SetParLimits(0,0,0);
   checkFit1013->SetParameter(1,1.003348);
   checkFit1013->SetParError(1,0.06135082);
   checkFit1013->SetParLimits(1,0,0);
   checkFit1013->Draw("same");
   
   pt = new TPaveText(0.3851005,0.94,0.6148995,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("Sub-runs 25");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
