void FieldFitCheck_NSUBRUN_75_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:57:12 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-70.61879,75,87.77181);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1041[5] = {
   -50,
   -25,
   0,
   25,
   50};
   Double_t Graph0_fy1041[5] = {
   -42.62798,
   -17.42911,
   7.896162,
   33.92237,
   59.781};
   Double_t Graph0_fex1041[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1041[5] = {
   1.592372,
   1.592372,
   1.592372,
   1.592372,
   1.592372};
   TGraphErrors *gre = new TGraphErrors(5,Graph0_fx1041,Graph0_fy1041,Graph0_fex1041,Graph0_fey1041);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 75");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01041 = new TH1F("Graph_Graph01041","Sub-runs 75",100,-60,60);
   Graph_Graph01041->SetMinimum(-54.77973);
   Graph_Graph01041->SetMaximum(71.93275);
   Graph_Graph01041->SetDirectory(0);
   Graph_Graph01041->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01041->SetLineColor(ci);
   Graph_Graph01041->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01041->GetXaxis()->CenterTitle(true);
   Graph_Graph01041->GetXaxis()->SetLabelFont(42);
   Graph_Graph01041->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01041->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01041->GetXaxis()->SetTitleFont(42);
   Graph_Graph01041->GetYaxis()->SetTitle("Calculated B_{r} [ppm]");
   Graph_Graph01041->GetYaxis()->CenterTitle(true);
   Graph_Graph01041->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01041->GetYaxis()->SetLabelFont(42);
   Graph_Graph01041->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01041->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01041->GetYaxis()->SetTitleFont(42);
   Graph_Graph01041->GetZaxis()->SetLabelFont(42);
   Graph_Graph01041->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01041->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01041);
   
   
   TF1 *checkFit1042 = new TF1("checkFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   checkFit1042->SetFillColor(19);
   checkFit1042->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1042->SetLineColor(ci);
   checkFit1042->SetLineWidth(2);
   checkFit1042->SetChisquare(0.1301356);
   checkFit1042->SetNDF(3);
   checkFit1042->GetXaxis()->SetLabelFont(42);
   checkFit1042->GetXaxis()->SetTitleOffset(1);
   checkFit1042->GetXaxis()->SetTitleFont(42);
   checkFit1042->GetYaxis()->SetLabelFont(42);
   checkFit1042->GetYaxis()->SetTitleFont(42);
   checkFit1042->SetParameter(0,8.308488);
   checkFit1042->SetParError(0,0.7121306);
   checkFit1042->SetParLimits(0,0,0);
   checkFit1042->SetParameter(1,1.024678);
   checkFit1042->SetParError(1,0.0201421);
   checkFit1042->SetParLimits(1,0,0);
   checkFit1042->SetParent(gre);
   gre->GetListOfFunctions()->Add(checkFit1042);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("0.0434");
   pt_LaTex = pt->AddText(" 1.02#pm0.0201");
   pt_LaTex = pt->AddText(" 8.31#pm0.712");
   pt_LaTex = pt->AddText("#minus8.11#pm0.713");
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
   TLine *line = new TLine(-60,0,-8.108391,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-8.108391,-54.77973,-8.108391,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *checkFit1043 = new TF1("checkFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   checkFit1043->SetFillColor(19);
   checkFit1043->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1043->SetLineColor(ci);
   checkFit1043->SetLineWidth(2);
   checkFit1043->SetChisquare(0.1301356);
   checkFit1043->SetNDF(3);
   checkFit1043->GetXaxis()->SetLabelFont(42);
   checkFit1043->GetXaxis()->SetTitleOffset(1);
   checkFit1043->GetXaxis()->SetTitleFont(42);
   checkFit1043->GetYaxis()->SetLabelFont(42);
   checkFit1043->GetYaxis()->SetTitleFont(42);
   checkFit1043->SetParameter(0,8.308488);
   checkFit1043->SetParError(0,0.7121306);
   checkFit1043->SetParLimits(0,0,0);
   checkFit1043->SetParameter(1,1.024678);
   checkFit1043->SetParError(1,0.0201421);
   checkFit1043->SetParLimits(1,0,0);
   checkFit1043->Draw("same");
   
   pt = new TPaveText(0.3851005,0.94,0.6148995,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("Sub-runs 75");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
