void test()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Jun 17 21:56:03 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TF1 *f_comb1 = new TF1("f_comb",";Time [T_{g-2}];#LT#theta_{y}#GT [arbitrary units]",0,4.365412, TF1::EAddToList::kDefault);
   f_comb1->SetFillColor(19);
   f_comb1->SetFillStyle(0);
   f_comb1->SetLineWidth(3);
   f_comb1->GetXaxis()->SetTitle("Time [T_{g-2}]");
   f_comb1->GetXaxis()->CenterTitle(true);
   f_comb1->GetXaxis()->SetLabelFont(42);
   f_comb1->GetXaxis()->SetTitleSize(0.04);
   f_comb1->GetXaxis()->SetTitleOffset(1.1);
   f_comb1->GetXaxis()->SetTitleFont(42);
   f_comb1->GetYaxis()->SetTitle("#LT#theta_{y}#GT [arbitrary units]");
   f_comb1->GetYaxis()->CenterTitle(true);
   f_comb1->GetYaxis()->SetNdivisions(4000510);
   f_comb1->GetYaxis()->SetLabelFont(42);
   f_comb1->GetYaxis()->SetTitleSize(0.04);
   f_comb1->GetYaxis()->SetTitleOffset(1.1);
   f_comb1->GetYaxis()->SetTitleFont(42);
   f_comb1->SetParameter(0,1);
   f_comb1->SetParError(0,0);
   f_comb1->SetParLimits(0,0,0);
   f_comb1->SetParameter(1,1.439311);
   f_comb1->SetParError(1,0);
   f_comb1->SetParLimits(1,0,0);
   f_comb1->Draw("");
   
   TLegend *leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(44);
   leg->SetTextSize(26);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("f_comb","A_{g-2}cos(#omega_{a}t) + A_{EDM}sin(#omega_{a}t)","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("f_cos","A_{g-2}cos(#omega_{a}t)","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("f_sin","A_{EDM}sin(#omega_{a}t)","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   
   TF1 *f_cos2 = new TF1("f_cos","[0]*cos([1]*x)",0,4.365412, TF1::EAddToList::kDefault);
   f_cos2->SetFillColor(19);
   f_cos2->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   f_cos2->SetLineColor(ci);
   f_cos2->SetLineWidth(3);
   f_cos2->SetLineStyle(2);
   f_cos2->GetXaxis()->SetLabelFont(42);
   f_cos2->GetXaxis()->SetTitleOffset(1);
   f_cos2->GetXaxis()->SetTitleFont(42);
   f_cos2->GetYaxis()->SetLabelFont(42);
   f_cos2->GetYaxis()->SetTitleFont(42);
   f_cos2->SetParameter(0,1);
   f_cos2->SetParError(0,0);
   f_cos2->SetParLimits(0,0,0);
   f_cos2->SetParameter(1,1.439311);
   f_cos2->SetParError(1,0);
   f_cos2->SetParLimits(1,0,0);
   f_cos2->Draw("SAME");
   
   TF1 *f_sin3 = new TF1("f_sin","[0]*sin([1]*x)",0,4.365412, TF1::EAddToList::kDefault);
   f_sin3->SetFillColor(19);
   f_sin3->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   f_sin3->SetLineColor(ci);
   f_sin3->SetLineWidth(3);
   f_sin3->SetLineStyle(2);
   f_sin3->GetXaxis()->SetLabelFont(42);
   f_sin3->GetXaxis()->SetTitleOffset(1);
   f_sin3->GetXaxis()->SetTitleFont(42);
   f_sin3->GetYaxis()->SetLabelFont(42);
   f_sin3->GetYaxis()->SetTitleFont(42);
   f_sin3->SetParameter(0,1);
   f_sin3->SetParError(0,0);
   f_sin3->SetParLimits(0,0,0);
   f_sin3->SetParameter(1,1.439311);
   f_sin3->SetParError(1,0);
   f_sin3->SetParLimits(1,0,0);
   f_sin3->Draw("SAME");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
