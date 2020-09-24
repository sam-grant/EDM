void Asymmetry_wa_restFrame()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Sep 22 15:55:51 2020) by ROOT version 6.16/00
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TF1 *N_11 = new TF1("N_1",";y=p/p_{max};Arbitrary units",0,1, TF1::EAddToList::kDefault);
   N_11->SetFillColor(19);
   N_11->SetFillStyle(0);
   N_11->SetLineWidth(3);
   N_11->GetXaxis()->SetTitle("y=p/p_{max}");
   N_11->GetXaxis()->SetRange(1,100);
   N_11->GetXaxis()->CenterTitle(true);
   N_11->GetXaxis()->SetLabelFont(42);
   N_11->GetXaxis()->SetLabelSize(0.035);
   N_11->GetXaxis()->SetTitleOffset(1.1);
   N_11->GetXaxis()->SetTitleFont(42);
   N_11->GetYaxis()->SetTitle("Arbitrary units");
   N_11->GetYaxis()->CenterTitle(true);
   N_11->GetYaxis()->SetNdivisions(4000510);
   N_11->GetYaxis()->SetLabelFont(42);
   N_11->GetYaxis()->SetLabelSize(0.035);
   N_11->GetYaxis()->SetTitleOffset(1.1);
   N_11->GetYaxis()->SetTitleFont(42);
   N_11->Draw("");
   
   TLegend *leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("N_1"," N(y)","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("A_1"," A(y)","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("NA2_1"," NA^{2}(y)","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   
   TF1 *A_12 = new TF1("A_1","(2*x-1) / (3-2*x)",0,1, TF1::EAddToList::kDefault);
   A_12->SetFillColor(19);
   A_12->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   A_12->SetLineColor(ci);
   A_12->SetLineWidth(3);
   A_12->GetXaxis()->SetLabelFont(42);
   A_12->GetXaxis()->SetLabelSize(0.035);
   A_12->GetXaxis()->SetTitleSize(0.035);
   A_12->GetXaxis()->SetTitleOffset(1);
   A_12->GetXaxis()->SetTitleFont(42);
   A_12->GetYaxis()->SetLabelFont(42);
   A_12->GetYaxis()->SetLabelSize(0.035);
   A_12->GetYaxis()->SetTitleSize(0.035);
   A_12->GetYaxis()->SetTitleFont(42);
   A_12->Draw("same");
   
   TF1 *NA2_13 = new TF1("NA2_1","N_1 * A_1 * A_1",0,1, TF1::EAddToList::kDefault);
   NA2_13->SetFillColor(19);
   NA2_13->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   NA2_13->SetLineColor(ci);
   NA2_13->SetLineWidth(3);
   NA2_13->GetXaxis()->SetLabelFont(42);
   NA2_13->GetXaxis()->SetLabelSize(0.035);
   NA2_13->GetXaxis()->SetTitleSize(0.035);
   NA2_13->GetXaxis()->SetTitleOffset(1);
   NA2_13->GetXaxis()->SetTitleFont(42);
   NA2_13->GetYaxis()->SetLabelFont(42);
   NA2_13->GetYaxis()->SetLabelSize(0.035);
   NA2_13->GetYaxis()->SetTitleSize(0.035);
   NA2_13->GetYaxis()->SetTitleFont(42);
   NA2_13->Draw("same");
   TLine *line = new TLine(0,0,1,0);
   line->SetLineStyle(2);
   line->SetLineWidth(3);
   line->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
